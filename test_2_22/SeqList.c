#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"




void SLInit(SL*pc)//��ʼ��˳���
{
	assert(pc);
	pc->size = 0;
	SLDataType * tmp = (SLDataType*)malloc(INIT_CAPICITY * sizeof(SLDataType));//�ȿ���һ�������Ŀռ�
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	pc->a = tmp;
	pc->capicity = INIT_CAPICITY; //��ʼ������

}



void SLDestroy(SL*pc)  //ɾ��˳���
{
	assert(pc);
	pc->capicity=pc->size = 0;
	free(pc->a);
	pc->a = NULL;


}

void Check_Capicity(SL* pc)  //����Ƿ���Ҫ����
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

void PrintSL(SL* pc) //��ӡ�洢��ÿ��Ԫ��
{
	for (int i = 0; i < pc->size; i++)
	{
		printf("%d ", pc->a[i]);
	}
}



void SLPushBack(SL* pc, SLDataType x)  //β��
{
	//����Ƿ���Ҫ����
	Check_Capicity(pc);

	pc->a[pc->size++] = x;
}


void SLPopBack(SL* pc)  //βɾ
{
	//�������
	assert(pc->size > 0);
	pc->size--;
}


void SLErase(SL* pc, int pos)//ɾ��
{
	
	for (int i = pos; i < pc->size; i++)
	{
		pc->a[i] = pc->a[i + 1];   //����֮ǰ������
	}
	pc->size--;
}


int  SLFind(SL* pc, SLDataType x)//Ѱ��һ�����������±�
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



