#define  _CRT_SECURE_NO_WARNINGS 1

#include"List.h"
void LTest1()
{
	LTNode* list = LTInit();
	LTPushBack(list, 1);
	LTPushBack(list, 2);
	LTPushBack(list, 3);
	LTPushBack(list, 4);

	
	LTDestroy(list);


	


	
	LTPrint(list);




}

int main()
{
	LTest1();
	return 0;
}