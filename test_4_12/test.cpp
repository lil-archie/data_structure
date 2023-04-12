#define  _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"
#include"Stack.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

// 升序
// 最坏：O(N^2)  逆序
// 最好：O(N)    顺序有序
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int end = i - 1;
		int tmp = a[i];
		// 将tmp插入到[0,end]区间中，保持有序
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

	// gap > 1 预排序
	// gap == 1 直接插入排序
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
		//printf("gap:%d->", gap);
		//PrintArray(a, n);
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// 最坏：O(N^2)
// 最好：O(N^2).
// 10:40继续
void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		int mini = left, maxi = left;
		for (int i = left + 1; i <= right; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}

			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}

		Swap(&a[left], &a[mini]);
		// 如果left和maxi重叠，交换后修正一下
		if (left == maxi)
		{
			maxi = mini;
		}

		Swap(&a[right], &a[maxi]);

		++left;
		--right;
	}
}

// 左右子树都是大堆/小堆
void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		// 选出左右孩子中大的那一个
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}

		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	// 建堆 -- 向下调整建堆 -- O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

	// 自己先实现 -- O(N*logN)
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		AdjustDown(a, end, 0);

		--end;
	}
}

// 最坏：O(N^2)
// 最好：O(N)
// [0, n)
void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; j++)
	{
		bool exchange = false;
		for (int i = 1; i < n - j; i++)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = true;
			}
		}

		if (exchange == false)
		{
			break;
		}
	}
}

int GetMidNumi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else // a[left] > a[mid]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

// O(N*logN)  20:20开始
// Hoare
//void QuickSort1(int* a, int left, int right)
//{
//	if (left >= right)
//		return;
//
//	int begin = left, end = right;
//
//	//// 随机选key
//	/*int randi = left + (rand() % (right - left));
//	Swap(&a[left], &a[randi]);*/
//
//	// 三数取中
//	int midi = GetMidNumi(a, left, right);
//	if(midi != left)
//		Swap(&a[midi], &a[left]);
//
//	int keyi = left;
//	while (left < right)
//	{
//		// 右边找小
//		while (left < right && a[right] >= a[keyi])
//			--right;
//
//		// 左边找大
//		while (left < right && a[left] <= a[keyi])
//			++left;
//
//		Swap(&a[left], &a[right]);
//	}
//
//	Swap(&a[keyi], &a[left]);
//	keyi = left;
//
//	// [begin, keyi-1] keyi [keyi+1, end] 
//	// 递归
//	QuickSort1(a, begin, keyi - 1);
//	QuickSort1(a, keyi+1, end);
//}
//
//// 挖坑法
//void QuickSort2(int* a, int left, int right)
//{
//	if (left >= right)
//		return;
//
//	int begin = left, end = right;
//
//	// 三数取中
//	int midi = GetMidNumi(a, left, right);
//	if (midi != left)
//		Swap(&a[midi], &a[left]);
//
//	// 21:10继续
//	int key = a[left];
//	int hole = left;
//	while (left < right)
//	{
//		// 右边找小
//		while (left < right && a[right] >= key)
//			--right;
//
//		a[hole] = a[right];
//		hole = right;
//
//		// 左边找大
//		while (left < right && a[left] <= key)
//			++left;
//
//		a[hole] = a[left];
//		hole = left;
//	}
//
//	a[hole] = key;
//
//	// [begin, hole-1] hole [hole+1, end] 
//	// 递归
//	QuickSort2(a, begin, hole - 1);
//	QuickSort2(a, hole + 1, end);
//}

// Hoare
int PartSort1(int* a, int left, int right)
{
	// 三数取中
	int midi = GetMidNumi(a, left, right);
	if (midi != left)
		Swap(&a[midi], &a[left]);

	int keyi = left;
	while (left < right)
	{
		// 右边找小
		while (left < right && a[right] >= a[keyi])
			--right;

		// 左边找大
		while (left < right && a[left] <= a[keyi])
			++left;

		Swap(&a[left], &a[right]);
	}

	Swap(&a[keyi], &a[left]);
	keyi = left;

	return keyi;
}

// 挖坑法
int PartSort2(int* a, int left, int right)
{
	// 三数取中
	int midi = GetMidNumi(a, left, right);
	if (midi != left)
		Swap(&a[midi], &a[left]);

	// 21:10继续
	int key = a[left];
	int hole = left;
	while (left < right)
	{
		// 右边找小
		while (left < right && a[right] >= key)
			--right;

		a[hole] = a[right];
		hole = right;

		// 左边找大
		while (left < right && a[left] <= key)
			++left;

		a[hole] = a[left];
		hole = left;
	}

	a[hole] = key;

	return hole;
}

// 前后指针法
int PartSort3(int* a, int left, int right)
{
	// 三数取中
	int midi = GetMidNumi(a, left, right);
	if (midi != left)
		Swap(&a[midi], &a[left]);

	int keyi = left;

	int prev = left;
	int cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[cur], &a[prev]);

		++cur;
	}

	Swap(&a[prev], &a[keyi]);
	keyi = prev;

	return keyi;
}

//void QuickSort(int* a, int left, int right)
//{
//	if (left >= right)
//		return;
//
//	// 小区间优化--小区间直接使用插入排序
//	if ((right - left + 1) > 10)
//	{
//		int keyi = PartSort3(a, left, right);
//		QuickSort(a, left, keyi - 1);
//		QuickSort(a, keyi + 1, right);
//	}
//	else
//	{
//		InsertSort(a+left, right - left + 1);
//	}
//}

void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;

	int keyi = PartSort3(a, left, right);
	QuickSort(a, left, keyi - 1);
	QuickSort(a, keyi + 1, right);
}


void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	STInit(&st);
	STPush(&st, right);
	STPush(&st, left);

	while (!STEmpty(&st))
	{
		int begin = STTop(&st);
		STPop(&st);
		int end = STTop(&st);
		STPop(&st);

		int keyi = PartSort3(a, begin, end);
		// [begin,keyi-1] keyi [keyi+1, end]
		if (keyi + 1 < end)
		{
			STPush(&st, end);
			STPush(&st, keyi + 1);
		}

		if (begin < keyi - 1)
		{
			STPush(&st, keyi - 1);
			STPush(&st, begin);
		}
	}

	STDestroy(&st);
}

// 11:56继续
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
		return;

	int mid = (begin + end) / 2;
	// [begin, mid] [mid+1,end]，子区间递归排序
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	// [begin, mid] [mid+1,end]归并
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}

	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}

//void _MergeSort(int* a, int begin, int end, int* tmp)
//{
//	if (begin >= end)
//		return;
//
//	int mid = (begin + end) / 2;
//	// [begin, mid] [mid+1,end]，子区间递归排序
//	_MergeSort(a, begin, mid, tmp);
//	_MergeSort(a, mid + 1, end, tmp);
//
//	// [begin, mid] [mid+1,end]归并
//	// ...
//	memcpy(a + begin, tmp + begin, 
//		sizeof(int) * (end - begin + 1));
//}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail\n");
		return;
	}

	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
}

//void MergeSortNonR(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//	{
//		perror("malloc fail\n");
//		return;
//	}
//
//	int gap = 1;
//	while (gap < n)
//	{
//		for (int i = 0; i < n; i += 2 * gap)
//		{
//			// [begin1,end1][begin2, end2]
//			int begin1 = i, end1 = i + gap - 1;
//			int begin2 = i + gap, end2 = i + 2 * gap - 1;
//			//printf("[%d,%d][%d,%d] ", begin1, end1,begin2,end2);
//
//			// 修正路线
//			if (end1 >= n)
//			{
//				end1 = n - 1;
//				begin2 = n;
//				end2 = n-1;
//			}
//			else if (begin2 >= n)
//			{
//				begin2 = n;
//				end2 = n - 1;
//			}
//			else if (end2 >= n)
//			{
//				end2 = n - 1;
//			}
//
//			printf("[%d,%d][%d,%d] ", begin1, end1, begin2, end2);
//
//			int j = i;
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (a[begin1] < a[begin2])
//				{
//					tmp[j++] = a[begin1++];
//				}
//				else
//				{
//					tmp[j++] = a[begin2++];
//				}
//			}
//
//			while (begin1 <= end1)
//			{
//				tmp[j++] = a[begin1++];
//			}
//
//			while (begin2 <= end2)
//			{
//				tmp[j++] = a[begin2++];
//			}
//		}
//
//		printf("\n");
//
//      // 间距为gap的多组数据，归并完以后，一把拷贝(梭哈)
//		memcpy(a, tmp, sizeof(int) * n);
//
//		gap *= 2;
//	}
//
//	free(tmp);
//}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail\n");
		return;
	}

	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			// [begin1,end1][begin2, end2]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			//printf("[%d,%d][%d,%d] ", begin1, end1,begin2,end2);

			if (end1 >= n || begin2 >= n)
			{
				break;
			}

			if (end2 >= n)
			{
				end2 = n - 1;
			}

			printf("[%d,%d][%d,%d] ", begin1, end1, begin2, end2);

			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}

			// 归并一部门拷贝一部分
			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}

		printf("\n");

		gap *= 2;
	}

	free(tmp);
}

// 时间复杂度：O(N+range)
// 空间复杂度：O(range)
void CountSort(int* a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}

		if (a[i] < min)
		{
			min = a[i];
		}
	}

	int range = max - min + 1;
	int* countA = (int*)malloc(sizeof(int) * range);
	if (countA == NULL)
	{
		perror("malloc fail\n");
		return;
	}
	memset(countA, 0, sizeof(int) * range);

	// 计数
	for (int i = 0; i < n; i++)
	{
		countA[a[i] - min]++;
	}

	// 排序
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (countA[i]--)
		{
			a[j++] = i + min;
		}
	}

	free(countA);
}