---
created: 2025-08-29T01:44
updated: 2025-08-29T01:46
---
# Supervision
## Supervision 项目介绍

**Supervision** 是由 Roboflow 开发的开源计算机视觉工具库，专注于提供可重用的计算机视觉组件。该项目的核心理念是"We write your reusable computer vision tools"（我们为您编写可重用的计算机视觉工具）。

### 主要特性

1. **多框架支持**：支持多种主流计算机视觉框架，包括：
   - Ultralytics YOLO
   - Roboflow Inference
   - Hugging Face Transformers
   - DETR

2. **丰富的标注工具**：提供多种可视化标注器：
   - BoxAnnotator（边界框标注）
   - LabelAnnotator（标签标注）
   - MaskAnnotator（掩码标注）
   - TraceAnnotator（轨迹标注）
   - HeatMapAnnotator（热力图标注）
   - PolygonAnnotator（多边形标注）
   - BlurAnnotator（模糊标注）
   - PixelateAnnotator（像素化标注）

3. **数据处理**：支持多种数据集格式的加载和转换：
   - YOLO 格式
   - Pascal VOC 格式
   - COCO 格式

4. **对象跟踪**：集成了多种跟踪算法，如 ByteTrack

5. **视频处理**：提供完整的视频处理流水线

## 配置教程

### 1. 基础安装

#### 使用 pip 安装（推荐）
```bash
pip install supervision
```

#### 使用 conda 安装
```bash
conda install -c conda-forge supervision
```

#### 使用 mamba 安装
```bash
mamba install -c conda-forge supervision
```

#### 使用 Poetry 安装
```bash
poetry add supervision
```

#### 使用 uv 安装
```bash
uv pip install supervision
```

### 2. 开发环境设置

如果您需要修改或贡献代码，可以使用开发模式安装：

```bash
# 克隆仓库
git clone --depth 1 -b develop https://github.com/roboflow/supervision.git
cd supervision

# 设置虚拟环境
python3 -m venv venv
source venv/bin/activate

# 开发安装
pip install -e "."
```

### 3. 完整示例设置

```bash
# 克隆仓库
git clone --depth 1 -b develop https://github.com/roboflow/supervision.git
cd supervision/examples/tracking

# 设置虚拟环境
python3 -m venv venv
source venv/bin/activate

# 安装依赖
pip install -r requirements.txt
```

### 4. 基础使用示例

#### 简单的图像标注
```python
import cv2
import supervision as sv
from ultralytics import YOLO

# 加载模型
model = YOLO("yolov8n.pt")

# 读取图像
image = cv2.imread("path/to/image.jpg")

# 进行推理
results = model(image)[0]
detections = sv.Detections.from_ultralytics(results)

# 创建标注器
box_annotator = sv.BoxAnnotator()
label_annotator = sv.LabelAnnotator()

# 创建标签
labels = [
    f"{class_name} {confidence:.2f}"
    for class_name, confidence
    in zip(detections['class_name'], detections.confidence)
]

# 标注图像
annotated_image = box_annotator.annotate(
    scene=image, detections=detections)
annotated_image = label_annotator.annotate(
    scene=annotated_image, detections=detections, labels=labels)

# 保存结果
cv2.imwrite("result.jpg", annotated_image)
```

#### 视频处理示例
```python
import supervision as sv
from ultralytics import YOLO

# 加载模型
model = YOLO("yolov8n.pt")

# 获取视频信息
video_info = sv.VideoInfo.from_video_path("input.mp4")

# 创建标注器
box_annotator = sv.BoxAnnotator()
label_annotator = sv.LabelAnnotator()

# 处理视频
def callback(frame: np.ndarray, _: int) -> np.ndarray:
    results = model(frame)[0]
    detections = sv.Detections.from_ultralytics(results)
  
    labels = [
        f"{class_name} {confidence:.2f}"
        for class_name, confidence
        in zip(detections['class_name'], detections.confidence)
    ]
  
    annotated_frame = box_annotator.annotate(
        scene=frame.copy(), detections=detections)
    annotated_frame = label_annotator.annotate(
        scene=annotated_frame, detections=detections, labels=labels)
  
    return annotated_frame

# 处理并保存视频
sv.process_video(
    source_path="input.mp4",
    target_path="output.mp4",
    callback=callback
)
```

### 5. 数据集处理示例

#### 加载 YOLO 数据集
```python
import supervision as sv

# 加载 YOLO 格式数据集
dataset = sv.DetectionDataset.from_yolo(
    images_directory_path="path/to/images",
    annotations_directory_path="path/to/labels",
    data_yaml_path="path/to/data.yaml"
)

# 转换为 Pascal VOC 格式
dataset.as_pascal_voc(
    images_directory_path="output/images",
    annotations_directory_path="output/annotations"
)
```

#### 数据集分割
```python
# 分割数据集
ds_train, ds_remaining = dataset.split(split_ratio=0.8, shuffle=True)
ds_valid, ds_test = ds_remaining.split(split_ratio=0.5, shuffle=True)

print(f"训练集: {len(ds_train)}, 验证集: {len(ds_valid)}, 测试集: {len(ds_test)}")
```

### 6. 对象跟踪示例

```python
import supervision as sv
from ultralytics import YOLO

# 初始化
model = YOLO("yolov8n.pt")
tracker = sv.ByteTrack()
box_annotator = sv.BoxAnnotator()
label_annotator = sv.LabelAnnotator()
trace_annotator = sv.TraceAnnotator()

def callback(frame: np.ndarray, _: int) -> np.ndarray:
    results = model(frame)[0]
    detections = sv.Detections.from_ultralytics(results)
  
    # 更新跟踪器
    detections = tracker.update_with_detections(detections)
  
    # 创建标签
    labels = [
        f"#{tracker_id} {class_name}"
        for tracker_id, class_name
        in zip(detections.tracker_id, detections['class_name'])
    ]
  
    # 标注
    annotated_frame = box_annotator.annotate(
        scene=frame.copy(), detections=detections)
    annotated_frame = label_annotator.annotate(
        scene=annotated_frame, detections=detections, labels=labels)
    annotated_frame = trace_annotator.annotate(
        scene=annotated_frame, detections=detections)
  
    return annotated_frame

# 处理视频
sv.process_video(
    source_path="input.mp4",
    target_path="tracked_output.mp4",
    callback=callback
)
```

## 系统要求

- Python 3.9+
- 根据使用的框架可能需要额外的依赖项

## 验证安装

```python
import supervision as sv
print(f"Supervision 版本: {sv.__version__}")
```

## 常见问题

1. **安装失败**：确保使用 Python 3.9+ 版本
2. **依赖冲突**：建议使用虚拟环境
3. **性能问题**：对于大型视频处理，考虑使用 GPU 加速

Supervision 是一个功能强大且易于使用的计算机视觉工具库，特别适合需要快速构建计算机视觉应用的开发者。它提供了丰富的功能和良好的文档支持，是计算机视觉项目的重要工具。