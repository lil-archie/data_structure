#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SLInit(SL* pc)//初始化顺序表
{
	assert(pc);
	pc->size = 0;
	SLDataType* tmp = (SLDataType*)malloc(INIT_CAPICITY * sizeof(SLDataType));//先开辟一块容量的空间
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	pc->a = tmp;
	pc->capicity = INIT_CAPICITY; //初始化容量

}



void SLDestroy(SL* pc)  //删除顺序表
{
	assert(pc);
	pc->capicity = pc->size = 0;
	free(pc->a);
	pc->a = NULL;


}

void Check_Capicity(SL* pc)  //检查是否需要增容
{
	
	if (pc->capicity == pc->size)
	{
		SLDataType* tmp = (SLDataType*)realloc(pc->a, sizeof(SLDataType) * 2 * (pc->capicity));
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		pc->a = tmp;
		pc->capicity *= 2;
		return;
	}
	else
	{
		return;
	}
}

void PrintSL(SL* pc) //打印存储的每个元素
{
	assert(pc);
	for (int i = 0; i < pc->size; i++)
	{
		printf("%d ", pc->a[i]);
	}
}



void SLPushBack(SL* pc, SLDataType x)  //尾插
{
	assert(pc);
	//检查是否需要增容
	Check_Capicity(pc);

	/*pc->a[pc->size++] = x;*/
	SLInsert(pc,pc->size, x);
}


void SLPopBack(SL* pc)  //尾删
{
	//暴力检查
	assert(pc->size > 0);
	/*pc->size--;*/
	SLErase(pc, pc->size - 1);

}

void SLPushFront(SL* pc, SLDataType x) //头插
{
	assert(pc);
	Check_Capicity(pc);
	/*for (int i = pc->size; i>0; i--)
	{
		pc->a[i] = pc->a[i - 1];
	}
	pc->a[0] = x;
	pc->size++;*/
	SLInsert(pc, 0, x);  //使用已有函数利用，可以简化代码
}

void SLPopFront(SL* pc)//头删
{
	assert(pc);
	/*for (int i = 0; i < pc->size; i++)
	{
		pc->a[i] = pc->a[i + 1];
	}
	pc->size--;*/
	SLErase(pc, 0);
}

void SLInsert(SL* pc, int pos, SLDataType x)//插入数据
{
	assert(pc);
	for (int i = pc->size; i > pos; i--)
	{
		pc->a[i] = pc->a[i - 1];
	}
	pc->a[pos] = x;
	pc->size++;
}





void SLErase(SL* pc, int pos)//删除
{
	assert(pc);
	for (int i = pos; i < pc->size; i++)
	{
		pc->a[i] = pc->a[i + 1];   //覆盖之前的数据
	}
	pc->size--;
}


int  SLFind(SL* pc, SLDataType x)//寻找一个数并返回下标
{

	assert(pc);
	for (int i = 0; i < pc->size; i++)
	{
		if (pc->a[i] == x)
		{
			return i;
		}


	}
	return -1;


}



