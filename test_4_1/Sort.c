#define  _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

void ArryPrint(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(int* a, int size)  //直接插入排序，传入数组，传入数组大小
{
	for (int i = 0; i < size-1; i++)
	{
		int end=i;
		int tmp=a[end+1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void ShellSort(int* a, int size)//希尔排序
{
	int gap=size;
	while (gap > 1)
	{
		gap /= 2;
	}
	for (int j = 0; j < gap; j++)
	{
		for (int i = j; i < size - gap; i += gap)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end-=gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;

		}
	}
	
	
	


}