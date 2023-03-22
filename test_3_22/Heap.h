#pragma once

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;





void HPInit(HP* php);//初始化

void swap(int* p1, int* p2);



void AdjustUp(HPDataType* a, int child); //向上定义



void HPPush(HP* php, HPDataType x);//插入数据

void AdjustDown(HPDataType* a, int size, int parent); //向下调整法 


void HPPop(HP* php);//删除数据

HPDataType HPTop(HP* php); //返回堆顶的值

bool HPEmpty(HP* php);   //判空





