#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
#include<windows.h>

//数据结构顺序表
//增删查改


#define INIT_CAPICITY 3  //定义容量方便之后按需扩容

typedef  int SLDataType;//方便以后可以修改想要存储的数据类型



typedef struct SeqList
{
	SLDataType* a;//相当于创建一块空间数组
	int size;//当前储存数据的个数
	int capicity;//数据存储的容量

}SL;




//函数声明
void SLInit(SL* pc);  //初始化
void SLDestroy(SL* pc);   //删除顺序表

void PrintSL(SL* pc);//打印

void SLPopBack(SL* pc); //尾删
void SLPushBack(SL* pc, SLDataType x);//尾插

void SLPopFront(SL* pc);//头删
void SLPushFront(SL* pc,SLDataType x);//头插

void SLInsert(SL* pc, int pos, SLDataType x);//插入数据


void SLErase(SL* pc, int pos);//找到pos 的位置并删除。
int  SLFind(SL* pc, SLDataType x);//寻找一个数并返回下标



