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

void QInit(Queue* pq); //初始化


void QPush(Queue* pq, QDataType x); //出队列
