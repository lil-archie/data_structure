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


//���ݽṹ ���Խṹ
//ϡ������
//int main()
//{
//	int chessArr1[11][11] = {0};//���贴��һ��11*11�����̣�0��ʾû���ӣ�1��ʾ�Ǻ��ӣ�2��ʾ�������ӡ�
//	 //�����ϵ�����λ��
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //���
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //������������
//	 int sum = 0;//������������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//�ҳ����������ӵĸ�����������洴��һ��ϡ������
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //����һ��ϡ������
//	 int sparseArr[3][3] = { 0 };//������c�������޷�������д��(�ڴ��������е�ʱ��)�����еģ�����ֱ�Ӵ���ԭ����
//	 //д��ϡ������
//	 // ��ʼ��ϡ������
//	 //  ���ĵ�һ���Ǵ��� ��ά������������������м�������ֵ
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //��������
//	 int count = 0;//���ڼ�¼�ڼ�����������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//��
//				 sparseArr[count][1] = j;//��
//				 sparseArr[count][2] = chessArr1[i][j];//��ǰ������ֵ
//			 }
//		 }
//	 }
	//�ȱ�����ӡϡ������
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //��ԭ��ά����
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
// ע�⣺�����������ԭ�������Ķ�
// ʾ�� 1��
// ���룺[3, 0, 1]
// �����2
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


//���ݽṹ ���Խṹ
//ϡ������
//int main()
//{
//	int chessArr1[11][11] = {0};//���贴��һ��11*11�����̣�0��ʾû���ӣ�1��ʾ�Ǻ��ӣ�2��ʾ�������ӡ�
//	 //�����ϵ�����λ��
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //���
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //������������
//	 int sum = 0;//������������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//�ҳ����������ӵĸ�����������洴��һ��ϡ������
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //����һ��ϡ������
//	 int sparseArr[3][3] = { 0 };//������c�������޷�������д��(�ڴ��������е�ʱ��)�����еģ�����ֱ�Ӵ���ԭ����
//	 //д��ϡ������
//	 // ��ʼ��ϡ������
//	 //  ���ĵ�һ���Ǵ��� ��ά������������������м�������ֵ
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //��������
//	 int count = 0;//���ڼ�¼�ڼ�����������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//��
//				 sparseArr[count][1] = j;//��
//				 sparseArr[count][2] = chessArr1[i][j];//��ǰ������ֵ
//			 }
//		 }
//	 }
	//�ȱ�����ӡϡ������
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //��ԭ��ά����
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
// ע�⣺�����������ԭ�������Ķ�
// ʾ�� 1��
// ���룺[3, 0, 1]
// �����2
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


//���ݽṹ ���Խṹ
//ϡ������
//int main()
//{
//	int chessArr1[11][11] = {0};//���贴��һ��11*11�����̣�0��ʾû���ӣ�1��ʾ�Ǻ��ӣ�2��ʾ�������ӡ�
//	 //�����ϵ�����λ��
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //���
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //������������
//	 int sum = 0;//������������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//�ҳ����������ӵĸ�����������洴��һ��ϡ������
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //����һ��ϡ������
//	 int sparseArr[3][3] = { 0 };//������c�������޷�������д��(�ڴ��������е�ʱ��)�����еģ�����ֱ�Ӵ���ԭ����
//	 //д��ϡ������
//	 // ��ʼ��ϡ������
//	 //  ���ĵ�һ���Ǵ��� ��ά������������������м�������ֵ
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //��������
//	 int count = 0;//���ڼ�¼�ڼ�����������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//��
//				 sparseArr[count][1] = j;//��
//				 sparseArr[count][2] = chessArr1[i][j];//��ǰ������ֵ
//			 }
//		 }
//	 }
	//�ȱ�����ӡϡ������
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //��ԭ��ά����
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
// ע�⣺�����������ԭ�������Ķ�
// ʾ�� 1��
// ���룺[3, 0, 1]
// �����2
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


//���ݽṹ ���Խṹ
//ϡ������
//int main()
//{
//	int chessArr1[11][11] = {0};//���贴��һ��11*11�����̣�0��ʾû���ӣ�1��ʾ�Ǻ��ӣ�2��ʾ�������ӡ�
//	 //�����ϵ�����λ��
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //���
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //������������
//	 int sum = 0;//������������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//�ҳ����������ӵĸ�����������洴��һ��ϡ������
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //����һ��ϡ������
//	 int sparseArr[3][3] = { 0 };//������c�������޷�������д��(�ڴ��������е�ʱ��)�����еģ�����ֱ�Ӵ���ԭ����
//	 //д��ϡ������
//	 // ��ʼ��ϡ������
//	 //  ���ĵ�һ���Ǵ��� ��ά������������������м�������ֵ
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //��������
//	 int count = 0;//���ڼ�¼�ڼ�����������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//��
//				 sparseArr[count][1] = j;//��
//				 sparseArr[count][2] = chessArr1[i][j];//��ǰ������ֵ
//			 }
//		 }
//	 }
	//�ȱ�����ӡϡ������
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //��ԭ��ά����
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
// ע�⣺�����������ԭ�������Ķ�
// ʾ�� 1��
// ���룺[3, 0, 1]
// �����2
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


//���ݽṹ ���Խṹ
//ϡ������
//int main()
//{
//	int chessArr1[11][11] = {0};//���贴��һ��11*11�����̣�0��ʾû���ӣ�1��ʾ�Ǻ��ӣ�2��ʾ�������ӡ�
//	 //�����ϵ�����λ��
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //���
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //������������
//	 int sum = 0;//������������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//�ҳ����������ӵĸ�����������洴��һ��ϡ������
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //����һ��ϡ������
//	 int sparseArr[3][3] = { 0 };//������c�������޷�������д��(�ڴ��������е�ʱ��)�����еģ�����ֱ�Ӵ���ԭ����
//	 //д��ϡ������
//	 // ��ʼ��ϡ������
//	 //  ���ĵ�һ���Ǵ��� ��ά������������������м�������ֵ
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //��������
//	 int count = 0;//���ڼ�¼�ڼ�����������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//��
//				 sparseArr[count][1] = j;//��
//				 sparseArr[count][2] = chessArr1[i][j];//��ǰ������ֵ
//			 }
//		 }
//	 }
	//�ȱ�����ӡϡ������
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //��ԭ��ά����
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
// ע�⣺�����������ԭ�������Ķ�
// ʾ�� 1��
// ���룺[3, 0, 1]
// �����2
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


//���ݽṹ ���Խṹ
//ϡ������
//int main()
//{
//	int chessArr1[11][11] = {0};//���贴��һ��11*11�����̣�0��ʾû���ӣ�1��ʾ�Ǻ��ӣ�2��ʾ�������ӡ�
//	 //�����ϵ�����λ��
//	chessArr1[1][2] = 1;
//	 chessArr1[2][3] = 2;
//	 //���
//	/*for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", chessArr1[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	 //������������
//	 int sum = 0;//������������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 sum++;//�ҳ����������ӵĸ�����������洴��һ��ϡ������
//			 }
//		 }
//	 }
//	 /*printf("%d", sum);*/
//	 
//	 //����һ��ϡ������
//	 int sparseArr[3][3] = { 0 };//������c�������޷�������д��(�ڴ��������е�ʱ��)�����еģ�����ֱ�Ӵ���ԭ����
//	 //д��ϡ������
//	 // ��ʼ��ϡ������
//	 //  ���ĵ�һ���Ǵ��� ��ά������������������м�������ֵ
//	 sparseArr[0][0] = 11;
//	 sparseArr[0][1] = 11;
//	 sparseArr[0][2] = 2;//sum
//	 //��������
//	 int count = 0;//���ڼ�¼�ڼ�����������
//	 for (int i = 0; i < 11; i++)
//	 {
//		 for (int j = 0; j < 11; j++)
//		 {
//			 if (chessArr1[i][j])
//			 {
//				 count++;
//				 sparseArr[count][0] = i;//��
//				 sparseArr[count][1] = j;//��
//				 sparseArr[count][2] = chessArr1[i][j];//��ǰ������ֵ
//			 }
//		 }
//	 }
	//�ȱ�����ӡϡ������
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	 printf("%d ", sparseArr[i][j]);
		// }
		// printf("\n");
	 //}
	 //��ԭ��ά����
	 //for (int i = 0; i < count+1; i++)//ע����count+1
	 //{
		// for (int j = 0; j < 3; j++)
		// {
		//	
		// }
		//
	 //}





//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
// ע�⣺�����������ԭ�������Ķ�
// ʾ�� 1��
// ���룺[3, 0, 1]
// �����2
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




















