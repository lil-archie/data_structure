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





void HPInit(HP* php);//��ʼ��

void swap(int* p1, int* p2);



void AdjustUp(HPDataType* a, int child); //���϶���



void HPPush(HP* php, HPDataType x);//��������

void AdjustDown(HPDataType* a, int size, int parent); //���µ����� 


void HPPop(HP* php);//ɾ������

HPDataType HPTop(HP* php); //���ضѶ���ֵ

bool HPEmpty(HP* php);   //�п�





