--创建数据库

--create database Come

--创建表

create table S(
	Sno int primary key identity(1, 1),
	Sname char(15) not null,
	Statuse int,
	City char(10) not null
)

--创建P 表

create table P(
	Pno int primary key identity(1, 1),
	Pname char(15) not null,
	Color char(10) not null,
	Weights int not null
)

--创建 J 表

create table J(
	Jno int primary key identity(1, 1),
	Jname char(15) not null,
	City char(10) not null
)

--创建 SPJ 表

create table SPJ(
	Sno int references S(Sno) not null,
	Pno int references P(Pno) not null,
	Jno int references J(Jno) not null,
	QTY int not null
)