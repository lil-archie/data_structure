#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>

//���ݽṹ˳���
//��ɾ���


#define INIT_CAPICITY 3  //������������֮��������

typedef  int SLDataType;//�����Ժ�����޸���Ҫ�洢����������



typedef struct SeqList
{
	SLDataType* a;//�൱�ڴ���һ��ռ�����
	int size;//��ǰ�������ݵĸ���
	int capicity;//���ݴ洢������
	
}SL;




//��������
void SLInit(SL* pc);  //��ʼ��
void SLDestroy(SL* pc);   //ɾ��˳���

void PrintSL(SL* pc);//��ӡ

void SLPopBack(SL*pc); //βɾ
void SLPushBack(SL* pc,SLDataType x);//β��



void SLErase(SL* pc,int pos);//�ҵ�pos ��λ�ò�ɾ����
int  SLFind(SL* pc, SLDataType x);//Ѱ��һ�����������±�



