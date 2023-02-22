#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"




void SLInit(SL*pc)//初始化顺序表
{
	assert(pc);
	pc->size = 0;
	SLDataType * tmp = (SLDataType*)malloc(INIT_CAPICITY * sizeof(SLDataType));//先开辟一块容量的空间
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	pc->a = tmp;
	pc->capicity = INIT_CAPICITY; //初始化容量

}



void SLDestroy(SL*pc)  //删除顺序表
{
	assert(pc);
	pc->capicity=pc->size = 0;
	free(pc->a);
	pc->a = NULL;


}

void Check_Capicity(SL* pc)  //检查是否需要增容
{
	if (pc->capicity <= pc->size)
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
	for (int i = 0; i < pc->size; i++)
	{
		printf("%d ", pc->a[i]);
	}
}



void SLPushBack(SL* pc, SLDataType x)  //尾插
{
	//检查是否需要增容
	Check_Capicity(pc);

	pc->a[pc->size++] = x;
}


void SLPopBack(SL* pc)  //尾删
{
	//暴力检查
	assert(pc->size > 0);
	pc->size--;
}


void SLErase(SL* pc, int pos)//删除
{
	
	for (int i = pos; i < pc->size; i++)
	{
		pc->a[i] = pc->a[i + 1];   //覆盖之前的数据
	}
	pc->size--;
}


int  SLFind(SL* pc, SLDataType x)//寻找一个数并返回下标
{
	
	
		for (int i = 0; i < pc->size; i++)
		{
			if (pc->a[i] == x)
			{
				return i;
			}
			
			
		}
		return -1;
	
	
}



