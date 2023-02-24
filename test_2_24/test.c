#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"




//头插尾插
//相当于在数组的第一个和最后一个插入数据
void SeqListTest1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 3);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);

	SLPushFront(&s, 5);

	SLPopFront(&s);

	SLPopBack(&s);
	SLInsert(&s, 3, 8);

	PrintSL(&s);


}


//int main(int argc, char* argv[])
//{
//	//SeqListTest1();
//	{
//		double x, y, a;
//		for (y = 1.5; y > -1.5; y -= 0.1)
//		{
//			for (x = -1.5; x < 1.5; x += 0.05)
//			{
//				a = x * x + y * y - 1;
//				putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
//			}
//			system("color 0c");
//			putchar('\n');
//		}
//		printf("~~~~~~~~~~~~		 我爱你泽宝			~~~~~~~~~~~~~~\n");
//		return 0;
//	}
//}