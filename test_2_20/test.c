#define  _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//
//	return 0;
//}


#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//
//}
//
//int main()
//{
//	test();
//}


//数据结构 线性结构
//稀疏数组
//int main()
//{
//	int chessArr1[11][11] = {0};//假设创建一个11*11的棋盘，0表示没有子，1表示是黑子，2表示的是蓝子。
//	 //棋盘上的棋子位置
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //输出
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //遍历整个数组
//	 int sum = 0;//计数器的作用
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//找出棋盘上有子的个数，方便后面创建一个稀疏数组
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //创建一个稀疏数组
//	 int sparseArr[3][3] = { 0 };//在这里c语言是无法将变量写入(在创建数组中的时候)数组中的，这里直接带入原数据
//	 //写入稀疏数组
//	 // 初始化稀疏数组
//	 //  表格的第一行是存入 二维数组的行数，列数，有几个非零值
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //遍历数组
//	 int count = 0;//用于记录第几个非零数据
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//行
//				 sparseArr[count][1] = j;//列
//				 sparseArr[count][2] = chessArr1[i][j];//当前的数据值
//			 }
//		 }
//	 }
	//先遍历打印稀疏数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //还原二维数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
// 注意：本题相对书上原题稍作改动
// 示例 1：
// 输入：[3, 0, 1]
// 输出：2
//



//int missingNumber(int* nums, int numsSize) {
//		int sum = 0;
//		for (int i = 0; i < numsSize; i++)
//		{
//			sum ^= nums[i];
//		}
//		for (int i = 0; i < numsSize + 1; i++)
//		{
//			sum ^= i;
//		}
//		return sum;
//}
//

//int main()
//{
//
//
//	int arr[] = { 3,0,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret=missingNumber(int* nums, int numsSize)
//
//
//	return 0;
//}
//
//..
//


//int main()
//{
//
//	return 0;
//}

//int missingNumber(int* nums, int numsSize) {
//	for ()
//}


#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//
//}
//
//int main()
//{
//	test();
//}


//数据结构 线性结构
//稀疏数组
//int main()
//{
//	int chessArr1[11][11] = {0};//假设创建一个11*11的棋盘，0表示没有子，1表示是黑子，2表示的是蓝子。
//	 //棋盘上的棋子位置
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //输出
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //遍历整个数组
//	 int sum = 0;//计数器的作用
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//找出棋盘上有子的个数，方便后面创建一个稀疏数组
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //创建一个稀疏数组
//	 int sparseArr[3][3] = { 0 };//在这里c语言是无法将变量写入(在创建数组中的时候)数组中的，这里直接带入原数据
//	 //写入稀疏数组
//	 // 初始化稀疏数组
//	 //  表格的第一行是存入 二维数组的行数，列数，有几个非零值
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //遍历数组
//	 int count = 0;//用于记录第几个非零数据
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//行
//				 sparseArr[count][1] = j;//列
//				 sparseArr[count][2] = chessArr1[i][j];//当前的数据值
//			 }
//		 }
//	 }
	//先遍历打印稀疏数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //还原二维数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
// 注意：本题相对书上原题稍作改动
// 示例 1：
// 输入：[3, 0, 1]
// 输出：2
//



//int missingNumber(int* nums, int numsSize) {
//		int sum = 0;
//		for (int i = 0; i < numsSize; i++)
//		{
//			sum ^= nums[i];
//		}
//		for (int i = 0; i < numsSize + 1; i++)
//		{
//			sum ^= i;
//		}
//		return sum;
//}
//

//int main()
//{
//
//
//	int arr[] = { 3,0,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret=missingNumber(int* nums, int numsSize)
//
//
//	return 0;
//}
//
//..
//


//int main()
//{
//
//	return 0;
//}

//int missingNumber(int* nums, int numsSize) {
//	for ()
//}





#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//
//}
//
//int main()
//{
//	test();
//}


//数据结构 线性结构
//稀疏数组
//int main()
//{
//	int chessArr1[11][11] = {0};//假设创建一个11*11的棋盘，0表示没有子，1表示是黑子，2表示的是蓝子。
//	 //棋盘上的棋子位置
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //输出
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //遍历整个数组
//	 int sum = 0;//计数器的作用
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//找出棋盘上有子的个数，方便后面创建一个稀疏数组
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //创建一个稀疏数组
//	 int sparseArr[3][3] = { 0 };//在这里c语言是无法将变量写入(在创建数组中的时候)数组中的，这里直接带入原数据
//	 //写入稀疏数组
//	 // 初始化稀疏数组
//	 //  表格的第一行是存入 二维数组的行数，列数，有几个非零值
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //遍历数组
//	 int count = 0;//用于记录第几个非零数据
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//行
//				 sparseArr[count][1] = j;//列
//				 sparseArr[count][2] = chessArr1[i][j];//当前的数据值
//			 }
//		 }
//	 }
	//先遍历打印稀疏数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //还原二维数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
// 注意：本题相对书上原题稍作改动
// 示例 1：
// 输入：[3, 0, 1]
// 输出：2
//



//int missingNumber(int* nums, int numsSize) {
//		int sum = 0;
//		for (int i = 0; i < numsSize; i++)
//		{
//			sum ^= nums[i];
//		}
//		for (int i = 0; i < numsSize + 1; i++)
//		{
//			sum ^= i;
//		}
//		return sum;
//}
//

//int main()
//{
//
//
//	int arr[] = { 3,0,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret=missingNumber(int* nums, int numsSize)
//
//
//	return 0;
//}
//
//..
//


//int main()
//{
//
//	return 0;
//}

//int missingNumber(int* nums, int numsSize) {
//	for ()
//}




#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//
//}
//
//int main()
//{
//	test();
//}


//数据结构 线性结构
//稀疏数组
//int main()
//{
//	int chessArr1[11][11] = {0};//假设创建一个11*11的棋盘，0表示没有子，1表示是黑子，2表示的是蓝子。
//	 //棋盘上的棋子位置
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //输出
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //遍历整个数组
//	 int sum = 0;//计数器的作用
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//找出棋盘上有子的个数，方便后面创建一个稀疏数组
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //创建一个稀疏数组
//	 int sparseArr[3][3] = { 0 };//在这里c语言是无法将变量写入(在创建数组中的时候)数组中的，这里直接带入原数据
//	 //写入稀疏数组
//	 // 初始化稀疏数组
//	 //  表格的第一行是存入 二维数组的行数，列数，有几个非零值
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //遍历数组
//	 int count = 0;//用于记录第几个非零数据
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//行
//				 sparseArr[count][1] = j;//列
//				 sparseArr[count][2] = chessArr1[i][j];//当前的数据值
//			 }
//		 }
//	 }
	//先遍历打印稀疏数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //还原二维数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
// 注意：本题相对书上原题稍作改动
// 示例 1：
// 输入：[3, 0, 1]
// 输出：2
//



//int missingNumber(int* nums, int numsSize) {
//		int sum = 0;
//		for (int i = 0; i < numsSize; i++)
//		{
//			sum ^= nums[i];
//		}
//		for (int i = 0; i < numsSize + 1; i++)
//		{
//			sum ^= i;
//		}
//		return sum;
//}
//

//int main()
//{
//
//
//	int arr[] = { 3,0,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret=missingNumber(int* nums, int numsSize)
//
//
//	return 0;
//}
//
//..
//


//int main()
//{
//
//	return 0;
//}

//int missingNumber(int* nums, int numsSize) {
//	for ()
//}


#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//
//}
//
//int main()
//{
//	test();
//}


//数据结构 线性结构
//稀疏数组
//int main()
//{
//	int chessArr1[11][11] = {0};//假设创建一个11*11的棋盘，0表示没有子，1表示是黑子，2表示的是蓝子。
//	 //棋盘上的棋子位置
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //输出
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //遍历整个数组
//	 int sum = 0;//计数器的作用
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//找出棋盘上有子的个数，方便后面创建一个稀疏数组
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //创建一个稀疏数组
//	 int sparseArr[3][3] = { 0 };//在这里c语言是无法将变量写入(在创建数组中的时候)数组中的，这里直接带入原数据
//	 //写入稀疏数组
//	 // 初始化稀疏数组
//	 //  表格的第一行是存入 二维数组的行数，列数，有几个非零值
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //遍历数组
//	 int count = 0;//用于记录第几个非零数据
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//行
//				 sparseArr[count][1] = j;//列
//				 sparseArr[count][2] = chessArr1[i][j];//当前的数据值
//			 }
//		 }
//	 }
	//先遍历打印稀疏数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //还原二维数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
// 注意：本题相对书上原题稍作改动
// 示例 1：
// 输入：[3, 0, 1]
// 输出：2
//



//int missingNumber(int* nums, int numsSize) {
//		int sum = 0;
//		for (int i = 0; i < numsSize; i++)
//		{
//			sum ^= nums[i];
//		}
//		for (int i = 0; i < numsSize + 1; i++)
//		{
//			sum ^= i;
//		}
//		return sum;
//}
//

//int main()
//{
//
//
//	int arr[] = { 3,0,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret=missingNumber(int* nums, int numsSize)
//
//
//	return 0;
//}
//
//..
//


//int main()
//{
//
//	return 0;
//}

//int missingNumber(int* nums, int numsSize) {
//	for ()
//}



#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//
//}
//
//int main()
//{
//	test();
//}


//数据结构 线性结构
//稀疏数组
//int main()
//{
//	int chessArr1[11][11] = {0};//假设创建一个11*11的棋盘，0表示没有子，1表示是黑子，2表示的是蓝子。
//	 //棋盘上的棋子位置
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //输出
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //遍历整个数组
//	 int sum = 0;//计数器的作用
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//找出棋盘上有子的个数，方便后面创建一个稀疏数组
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //创建一个稀疏数组
//	 int sparseArr[3][3] = { 0 };//在这里c语言是无法将变量写入(在创建数组中的时候)数组中的，这里直接带入原数据
//	 //写入稀疏数组
//	 // 初始化稀疏数组
//	 //  表格的第一行是存入 二维数组的行数，列数，有几个非零值
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //遍历数组
//	 int count = 0;//用于记录第几个非零数据
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//行
//				 sparseArr[count][1] = j;//列
//				 sparseArr[count][2] = chessArr1[i][j];//当前的数据值
//			 }
//		 }
//	 }
	//先遍历打印稀疏数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //还原二维数组
	 //for (int i = 0; i < count+1; i++)//注意是count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
// 注意：本题相对书上原题稍作改动
// 示例 1：
// 输入：[3, 0, 1]
// 输出：2
//



//int missingNumber(int* nums, int numsSize) {
//		int sum = 0;
//		for (int i = 0; i < numsSize; i++)
//		{
//			sum ^= nums[i];
//		}
//		for (int i = 0; i < numsSize + 1; i++)
//		{
//			sum ^= i;
//		}
//		return sum;
//}
//

//int main()
//{
//
//
//	int arr[] = { 3,0,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret=missingNumber(int* nums, int numsSize)
//
//
//	return 0;
//}
//
//..
//


//int main()
//{
//
//	return 0;
//}

//int missingNumber(int* nums, int numsSize) {
//	for ()
//}




















