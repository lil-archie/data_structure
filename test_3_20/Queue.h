#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int QDataType;

typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* Tail;
	int size;
}Queue;

void QInit(Queue* pq); //��ʼ��


void QPush(Queue* pq, QDataType x); //������
