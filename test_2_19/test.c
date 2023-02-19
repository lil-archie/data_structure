#define  _CRT_SECURE_NO_WARNINGS 1

//寻找缺少的数字

//int main()
//{
//
//}

//int missingNumber(int* nums, int numsSize) {
//    int sum = 0;
//    for (int i = 0; i < numsSize + 1; i++)
//    {
//        sum += i;
//    }
//    int count = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        count += nums[i];
//    }
//    return sum - count;
//}

//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
//示例 1:
//
//输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//输出 : [5, 6, 7, 1, 2, 3, 4]
//解释 :
//	向右轮转 1 步 : [7, 1, 2, 3, 4, 5, 6]
//	向右轮转 2 步 : [6, 7, 1, 2, 3, 4, 5]
//	向右轮转 3 步 : [5, 6, 7, 1, 2, 3, 4]


//void rotate(int* nums, int numsSize, int k) 
//{
//
//}



//void swap(int* a, int* b) {
//    int t = *a;
//    *a = *b, 
//     * b = t;
//}
//void reverse(int* nums, int start, int end) {
//    while (start < end) {
//        swap(&nums[start], &nums[end]);
//        start += 1;
//        end -= 1;
//    }
//}
//void rotate(int* nums, int numsSize, int k) {
//    k %= numsSize;
//    reverse(nums, 0, numsSize - 1);
//    reverse(nums, 0, k - 1);
//    reverse(nums, k, numsSize - 1);
//}
//
void swap(int* start, int* end)//交换两个数的函数，使用指针来实现。
{
    int tmp = *start;
    *start = *end;
    *end = tmp;
}

void reverse(int* nums, int start, int end)
{
    while (start <= end)
    {
        swap(&nums[start], &nums[end]);//交换一前一后的值，实现逆置。
        start++;
        end--;

    }
}




void rotate(int* nums, int numsSize, int k)
{
    k %= numsSize;//重要，因为当k超过numsSize时就会发生数组越界，这样可以简化冗余步骤。
    reverse(nums, 0, numsSize - 1);//先将整个数组逆置
    reverse(nums, 0, k - 1);//将前k个数组元素逆置
    reverse(nums, k, numsSize - 1);//将后k个数组元素逆置



}