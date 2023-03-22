#define  _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void HPInit(HP* php) //��ʼ��
{
	php->a = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (php->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	php->capacity = 4;
	php->size = 0;
}

void swap(HPDataType * p1, HPDataType * p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void AdjustUp(HPDataType * a, int child) //���ϵ���
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
		
	}

}




void HPPush(HP* php,HPDataType x) //��������
{
	assert(php);
	if (php->size == php->capacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->a,sizeof(HPDataType) * php->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		php->capacity *= 2;
		php->a = tmp;

		
	}
	php->a[php->size++] = x;
	

	AdjustUp(php->a, php->size - 1);
}

bool HPEmpty(HP * php)   //�п�
{
	assert(php);
	return php->size == 0;
}

//��������
void AdjustDown(HPDataType *a,int size,int parent) //���µ����� 
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] > a[child])//�ҳ����ĺ���
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}

	}
}


void HPPop(HP* php)
{
	assert(php);
	assert(!HPEmpty(php));
	swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php->a, php->size, 0);
}


HPDataType HPTop(HP* php)//���ضѶ���ֵ
{
	assert(php);
	return php->a[0];
}

//void HPDestroy(HP* php)
//{
//	assert(php);
//	free(php->a);
//	php->capacity = 0;
//	php->size = 0;
//}
