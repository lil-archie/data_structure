#define  _CRT_SECURE_NO_WARNINGS 1

#include"Stack.h"
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	
//	while (a--)
//	{
//		int b = a;
//		printf("%d ", b);
//	}
//	printf("%d", a);
//	
//
//	return 0;
//}

//struct Node* copyRandomList(struct Node* head) {
//    //1.�������������ԭ������ ��Ҫcur copy next
//    struct Node* cur = head;
//    while (cur)
//    {
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        struct Node* next = cur->next;
//        copy->val = cur->val;
//        cur->next = copy;
//        copy->next = next;
//        cur = next;
//    }
//    //2.copy�����random���ǣ�ԭ�����random->next
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        if (cur->random == NULL)
//        {
//            copy->random = NULL;
//        }
//        else
//        {
//            copy->random = cur->random->next;
//        }
//        cur = cur->next->next;
//
//    }
//    //3.����������������������һ���µ�����
//    struct Node* copyHead = NULL, * copyTail = NULL;
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        if (copyHead == NULL)
//        {
//            copyHead = copyTail = copy;
//
//        }
//        else
//        {
//            copyTail->next = copy;
//            copyTail = copyTail->next;
//
//        }
//        cur->next = next;
//        cur = next;
//    }
//    return copyHead;
//
//
//
//}


int main()
{
	ST p;
	STInit(&p);
	STPush(&p, 1);
	STPush(&p, 2);
	STPush(&p, 3);
	STPush(&p, 4);

	printf("%d", STTop(&p));
	STPop(&p);
	printf("%d ", STTop(&p));


	return 0;


}

