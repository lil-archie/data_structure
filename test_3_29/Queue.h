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

void QInit(Queue* pq); //��ʼ��


void QPush(Queue* pq, QDataType x); //�����

void QPop(Queue* pq);// ������

void QDestroy(Queue* pq);//���ٶ���

int QueueSize(Queue* pq); //����size

bool QEmpty(Queue* pq); //�п�

QDataType QFront(Queue* pq); //����ͷ������

QDataType QBack(Queue* pq);//����β������




