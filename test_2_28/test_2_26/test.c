#define  _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"
void SListTest1()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);



	/*SLTPopBack(&plist);
	SLTPopBack(&plist);
	SLTPopBack(&plist);
	SLTPopBack(&plist);*/
	SLTNode*pos=SLTFind(plist, 1);

	//printf("%p ", pos);
	//SLTErase(&plist,pos );
	SLTModify(plist, pos, 7);
	//SLTInsertFront(&plist, pos, 2);//在pos 节点之前插入
	SLTInsertBack(&plist, pos, 50);

	SLTPrint(plist);
}
int main()
{
	SListTest1();

	return 0;
}
//struct ListNode* removeElements(struct ListNode* head, int val) 
//{
//	struct ListNode* dummyHead = malloc(sizeof(struct ListNode));
//	dummyHead->next = head;
//	struct ListNode* temp = dummyHead;
//	while (temp->next != NULL) {
//		if (temp->next->val == val) 
//		{
//			temp->next = temp->next->next;
//		}
//		else 
//		{
//			temp = temp->next;
//		}
//	}
//	return dummyHead->next;
//}