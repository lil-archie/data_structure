#define  _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

int main()
{
	HP hp;
	HPInit(&hp);
	HPPush(&hp, 1);
	HPPush(&hp, 2);
	HPPush(&hp, 3);
	HPPush(&hp, 6);
	HPPush(&hp, 4);
	HPPush(&hp, 4);

	/*printf("%d ", HPTop(&hp));*/

	
	

	while (!HPEmpty(&hp))
	{
		printf("%d ", HPTop(&hp));
		HPPop(&hp);
	}

	
	return 0;


}