#define  _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void STListTest1()
{
	SLTNode * plist=NULL;//ע����������ʼ��NULL����Ȼ�ͻ���Ұָ��
	SLTPushBack(&plist,1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);

	
	
	SLTPopFront(&plist);
	SLTPopFront(&plist);
	SLTPopFront(&plist);
	SLTPopFront(&plist);

	
	


	SLTPrint(plist);

}

int main()
{
	STListTest1();
	return 0;
}