#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef struct BinaryTreeNode* QDataType;

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


void QPush(Queue* pq, QDataType x); //入队列

void QPop(Queue* pq);// 出队列

void QDestroy(Queue* pq);//销毁队列

int QueueSize(Queue* pq); //返回size

bool QEmpty(Queue* pq); //判空

QDataType QFront(Queue* pq); //返回头部数据

QDataType QBack(Queue* pq);//返回尾部数据




