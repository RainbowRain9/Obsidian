--�������ݿ�

--create database Come

--������

create table S(
	Sno int primary key identity(1, 1),
	Sname char(15) not null,
	Statuse int,
	City char(10) not null
)

--����P ��

create table P(
	Pno int primary key identity(1, 1),
	Pname char(15) not null,
	Color char(10) not null,
	Weights int not null
)

--���� J ��

create table J(
	Jno int primary key identity(1, 1),
	Jname char(15) not null,
	City char(10) not null
)

--���� SPJ ��

create table SPJ(
	Sno int references S(Sno) not null,
	Pno int references P(Pno) not null,
	Jno int references J(Jno) not null,
	QTY int not null
)