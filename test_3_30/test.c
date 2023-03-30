#define  _CRT_SECURE_NO_WARNINGS 1

#include"Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

// ����
// ���O(N^2)  ����
// ��ã�O(N)    ˳������
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int end = i - 1;
		int tmp = a[i];
		// ��tmp���뵽[0,end]�����У���������
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}

		a[end + 1] = tmp;
	}
}

void ShellSort(int* a, int n)
{
	/*int gap = 3;
	for (int j = 0; j < gap; j++)
	{
		for (int i = j; i < n - gap; i += gap)
		{
			int end = i;
			int tmp = a[i + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}*/

	// gap > 1 Ԥ����
	// gap == 1 ֱ�Ӳ�������
	int gap = n;
	while (gap > 1)
	{
		//gap /= 2;
		gap = gap / 3 + 1;

		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[i + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}

		//PrintArray(a, n);
	}
}


#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void PrintArray(int* a, int n);
void InsertSort(int* a, int n);
void ShellSort(int* a, int n);