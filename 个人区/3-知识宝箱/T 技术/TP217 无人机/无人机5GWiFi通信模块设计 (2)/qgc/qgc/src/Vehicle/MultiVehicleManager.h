/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


/// @file
///     @author Don Gagne <don@thegagnes.com>

#ifndef MultiVehicleManager_H
#define MultiVehicleManager_H

#include "Vehicle.h"
#include "QGCMAVLink.h"
#include "QmlObjectListModel.h"
#include "QGCToolbox.h"
#include "QGCLoggingCategory.h"

class FirmwarePluginManager;
class FollowMe;
class JoystickManager;
class QGCApplication;
class MAVLinkProtocol;

//111111111111111111111111111111111111
#pragma pack(1)  // 设置一字节对齐
struct vehicleInfoPublish
{
    quint8 id;
    quint32 lat;
    quint32 lon;
    quint32 height;//相对高度
    quint32 altitude;//海拔高度
    vehicleInfoPublish() { memset(this,0,sizeof(vehicleInfoPublish));}
};
#pragma pack()  // 取消之前的对齐设置

//222222222222222222222222222222222222222
Q_DECLARE_LOGGING_CATEGORY(MultiVehicleManagerLog)

class MultiVehicleManager : public QGCTool
{
    Q_OBJECT

public:
    MultiVehicleManager(QGCApplication* app, QGCToolbox* toolbox);

    Q_INVOKABLE void        saveSetting (const QString &key, const QString& value);
    Q_INVOKABLE QString     loadSetting (const QString &key, const QString& defaultValue);

    Q_PROPERTY(bool                 activeVehicleAvailable          READ activeVehicleAvailable                                         NOTIFY activeVehicleAvailableChanged)
    Q_PROPERTY(bool                 parameterReadyVehicleAvailable  READ parameterReadyVehicleAvailable                                 NOTIFY parameterReadyVehicleAvailableChanged)
    Q_PROPERTY(Vehicle*             activeVehicle                   READ activeVehicle                  WRITE setActiveVehicle          NOTIFY activeVehicleChanged)
    Q_PROPERTY(QmlObjectListModel*  vehicles                        READ vehicles                                                       CONSTANT)
    Q_PROPERTY(bool                 gcsHeartBeatEnabled             READ gcsHeartbeatEnabled            WRITE setGcsHeartbeatEnabled    NOTIFY gcsHeartBeatEnabledChanged)
    Q_PROPERTY(Vehicle*             offlineEditingVehicle           READ offlineEditingVehicle                                          CONSTANT)
    Q_PROPERTY(QGeoCoordinate       lastKnownLocation               READ lastKnownLocation                                              NOTIFY lastKnownLocationChanged) //< Current vehicles last know location

    // Methods

    Q_INVOKABLE Vehicle* getVehicleById(int vehicleId);

    Q_PROPERTY(float vol READ vol WRITE setVol NOTIFY volChanged FINAL)
    Q_PROPERTY(bool carState READ carState WRITE setCarState NOTIFY carStateChanged FINAL)
    Q_PROPERTY(bool lidaState READ lidaState WRITE setLidaState NOTIFY lidaStateChanged FINAL)
    Q_PROPERTY(bool podState READ podState WRITE setPodState NOTIFY podStateChanged FINAL)
    Q_PROPERTY(bool carMode READ carMode WRITE setCarMode NOTIFY carModeChanged FINAL)
    Q_PROPERTY(float jiaoju READ jiaoju WRITE setJiaoju NOTIFY jiaojuChanged FINAL)
    Q_PROPERTY(float distance READ distance WRITE setDistance NOTIFY distanceChanged FINAL)
    Q_PROPERTY(float speed READ speed WRITE setSpeed NOTIFY speedChanged FINAL)

    UAS* activeUas(void) { return _activeVehicle ? _activeVehicle->uas() : nullptr; }

    // Property accessors

    bool activeVehicleAvailable(void) const{ return _activeVehicleAvailable; }

    bool parameterReadyVehicleAvailable(void) const{ return _parameterReadyVehicleAvailable; }

    Vehicle* activeVehicle(void) { return _activeVehicle; }
    void setActiveVehicle(Vehicle* vehicle);

    QmlObjectListModel* vehicles(void) { return &_vehicles; }

    bool gcsHeartbeatEnabled(void) const { return _gcsHeartbeatEnabled; }
    void setGcsHeartbeatEnabled(bool gcsHeartBeatEnabled);

    Vehicle* offlineEditingVehicle(void) { return _offlineEditingVehicle; }

    // Override from QGCTool
    virtual void setToolbox(QGCToolbox *toolbox);

    QGeoCoordinate lastKnownLocation    () { return _lastKnownLocation; }

    //1111111111111111111111111111
    void sendVehicleInfosToServer();

    //2222222222222222222222222222

    void _handleCarInfo(mavlink_message_t& message);

    float vol() const;
    void setVol(float newVol);

    bool carState() const;
    void setCarState(bool newCarState);

    bool lidaState() const;
    void setLidaState(bool newLidaState);

    bool podState() const;
    void setPodState(bool newPodState);

    bool carMode() const;
    void setCarMode(bool newCarMode);

    float jiaoju() const;
    void setJiaoju(float newJiaoju);

    float distance() const;
    void setDistance(float newDistance);

    float speed() const;
    void setSpeed(float newSpeed);

signals:
    void vehicleAdded                   (Vehicle* vehicle);
    void vehicleRemoved                 (Vehicle* vehicle);
    void activeVehicleAvailableChanged  (bool activeVehicleAvailable);
    void parameterReadyVehicleAvailableChanged(bool parameterReadyVehicleAvailable);
    void activeVehicleChanged           (Vehicle* activeVehicle);
    void gcsHeartBeatEnabledChanged     (bool gcsHeartBeatEnabled);
    void lastKnownLocationChanged       ();
#ifndef DOXYGEN_SKIP
    void _deleteVehiclePhase2Signal     (void);
#endif

    void volChanged();

    void carStateChanged();

    void lidaStateChanged();

    void podStateChanged();

    void carModeChanged();

    void jiaojuChanged();

    void distanceChanged();

    void speedChanged();

private slots:
    void _deleteVehiclePhase1           (Vehicle* vehicle);
    void _deleteVehiclePhase2           (void);
    void _setActiveVehiclePhase2        (void);
    void _vehicleParametersReadyChanged (bool parametersReady);
    void _sendGCSHeartbeat              (void);
    void _vehicleHeartbeatInfo          (LinkInterface* link, int vehicleId, int componentId, int vehicleFirmwareType, int vehicleType);
    void _requestProtocolVersion        (unsigned version);
    void _coordinateChanged             (QGeoCoordinate coordinate);

private:
    bool _vehicleExists(int vehicleId);

    bool        _activeVehicleAvailable;            ///< true: An active vehicle is available
    bool        _parameterReadyVehicleAvailable;    ///< true: An active vehicle with ready parameters is available
    Vehicle*    _activeVehicle;                     ///< Currently active vehicle from a ui perspective
    Vehicle*    _offlineEditingVehicle;             ///< Disconnected vechicle used for offline editing

    QList<Vehicle*> _vehiclesBeingDeleted;          ///< List of Vehicles being deleted in queued phases
    Vehicle*        _vehicleBeingSetActive;         ///< Vehicle being set active in queued phases

    QList<int>  _ignoreVehicleIds;          ///< List of vehicle id for which we ignore further communication

    QmlObjectListModel  _vehicles;

    FirmwarePluginManager*      _firmwarePluginManager;
    JoystickManager*            _joystickManager;
    MAVLinkProtocol*            _mavlinkProtocol;
    QGeoCoordinate              _lastKnownLocation;

    QTimer              _gcsHeartbeatTimer;             ///< Timer to emit heartbeats
    bool                _gcsHeartbeatEnabled;           ///< Enabled/disable heartbeat emission
    static const int    _gcsHeartbeatRateMSecs = 1000;  ///< Heartbeat rate
    static const char*  _gcsHeartbeatEnabledKey;

    //11111111111111111111111111
    QUdpSocket* m_udp;
    //2222222222222222222222

    float m_vol;
    bool m_carState;
    bool m_lidaState;
    bool m_podState;
    bool m_carMode;

    float m_jiaoju;
    float m_bizhangFaild =0;
    float m_distance;
    float m_speed;
    float m_tip=0;


};


#endif
