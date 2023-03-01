#define  _CRT_SECURE_NO_WARNINGS 1

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* prev = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val != val)
//        {
//            prev = cur;
//            cur = cur->next;
//
//        }
//        else
//        {
//            if (prev == NULL)
//            {
//                head = cur->next;
//                free(cur);
//                cur = head;
//            }
//            else
//            {
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//
//        }
//    }
//    return head;
//}



//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* prev = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val != val)
//        {
//            prev = cur;
//            cur = cur->next;
//
//        }
//        else
//        {
//            if (prev == NULL)//这里判断是为了，如果按下面的执行，当一个节点释放时，head就变成野指针了
//            {
//                head = cur->next;
//                free(cur);
//                cur = head;
//            }
//            else
//            {
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//
//        }
//    }
//    return head;
//}



//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* newnode = NULL;
//    struct ListNode* tail = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val != val)
//        {
//            if (newnode == NULL)
//            {
//                newnode = tail = cur;
//
//            }
//            else
//            {
//                tail->next = cur;
//                tail = tail->next;
//            }
//            cur = cur->next;
//        }
//        else
//        {
//            struct ListNdoe* next = cur->next;
//            free(cur);
//            cur = next;
//        }
//        if (tail)
//            tail->next = NULL;
//    }
//    return newnode;
//}
struct ListNode
{
	int x;
	struct ListNode* next;
};

int main()
{
	struct ListNode ls;
}