// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
#pragma once

// TODO: 在此处引用程序需要的其他头文件
#include"leidef.h"
#include"function.h"
#include<fstream>
#include"Articleinfo.h"
#include"Form2.h"
#include"collection.h"
#include "StuForm.h"

#include"mark.h"
#include "TecForm.h"
#include"manageForm.h"
#include"regForm.h"
#include"login.h"


int stunum;//学生总数
int tecnum;//教师总数
int arcnum;//文章总数
int repnum;//举报总数
int manum;//管理员总数
int usertype;//用户类型
char username[50];//用户名
Student globalstu;//学生
Teacher globaltec;//教师
Manager globalman;//管理员
Article globalart;//文章
LList<Student>stulist;
LList<Teacher>teclist;
LList<Manager>manlist;
LList<Record>replist;
LList<Article>artlist;
LList<Article>artfromsj[6];//既是按专业建立的索引源，其中的每项也是专业查找的结果
LList<Student>stuidindex[10];//学生ID索引源，索引结果是单个记录
LList<Article>artidindex[10];//文章ID索引源，索引结果是单个记录
LList<Article>artmarkindex[5];//文章分数索引源
LList<Article>artfrommark;//文章分数查找结果
LList<Article>artfromname;//教师姓名查找结果
LList<Article>finalartresult;
LList<Student>checkstulist;
