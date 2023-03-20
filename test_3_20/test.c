#define  _CRT_SECURE_NO_WARNINGS 1

//typedef struct {
//    int* a;
//    int front;
//    int rear;
//    int k;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k)
//{
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    obj->front = obj->rear = 0;
//    obj->a = (int*)malloc(sizeof(int) * (k + 1));
//
//
//    obj->k = k;
//    return obj;
//}
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {//�п�
//    return obj->front == obj->rear;
//}
//
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {//��������
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return false;
//    }
//    else
//    {
//        obj->a[obj->rear++] = value;
//        obj->rear %= (obj->k + 1);//ȡģ�ǿ���reer�ķ�Χ
//        return true;
//    }
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {//ɾ������
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return false;
//    }
//    else
//    {
//        obj->front++;
//        obj->front %= (obj->k + 1);//ȡģ�ǿ���rear�ķ�Χ
//        return true;
//    }
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {//�ж��Ƿ�����
//    return (obj->rear + 1 % obj->k + 1) == obj->front;
//}
//
//
//int myCircularQueueFront(MyCircularQueue* obj) {//��ȡͷԪ��
//    if (myCircularQueueIsFull(obj))
//    {
//        return -1;
//    }
//    else
//    {
//        return obj->a[obj->front];
//    }
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {//��ȡβԪ��
//    if (myCircularQueueIsFull(obj))
//    {
//        return -1;
//    }
//    else
//    {
//        return obj->a[(obj->rear - 1 + obj->k + 1) % (obj->k + 1)];
//    }
//}
//
//
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    free(obj);
//}
//
///**
// * Your MyCircularQueue struct will be instantiated and called as such:
// * MyCircularQueue* obj = myCircularQueueCreate(k);
// * bool param_1 = myCircularQueueEnQueue(obj, value);
//
// * bool param_2 = myCircularQueueDeQueue(obj);
//
// * int param_3 = myCircularQueueFront(obj);
//
// * int param_4 = myCircularQueueRear(obj);
//
// * bool param_5 = myCircularQueueIsEmpty(obj);
//
// * bool param_6 = myCircularQueueIsFull(obj);
//
// * myCircularQueueFree(obj);
//*/

