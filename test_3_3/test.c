#define  _CRT_SECURE_NO_WARNINGS 1
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* cur1 = list1;
//    struct ListNode* cur2 = list2;
//    struct ListNode* newHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail = newHead;
//    while (cur1 && cur2)
//    {
//        if (cur1->val >= cur2->val)
//        {
//            tail->next = cur2;
//            cur2 = cur2->next;
//        }
//        else
//        {
//            tail->next = cur1;
//            cur1 = cur1->next;
//        }
//        tail = tail->next;
//
//    }
//    cur1 = (cur1 ? cur1 : cur2);
//    tail->next = cur1;
//
//    return newHead->next;
//}


//
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//
//
//    struct ListNode* fast = pListHead;
//    struct ListNode* slow = pListHead;
//    while (k--)
//    {
//        if (fast == NULL)//判断当k大于等于节点个数时，直接返回
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//
//
//
//}

//
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)//分别为偶数个和奇数中间节点时
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//


//
//struct ListNode* reverseList(struct ListNode* head) {
//    struct LIstNode* prev = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = prev;
//        prev = cur;
//        cur = next;
//
//    }
//    return prev;
//}
