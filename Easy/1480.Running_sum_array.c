/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *arr=(int*) malloc((*returnSize)*sizeof(int));
    int i,j,sum=0;
    for (i=0;i<numsSize;i++){
        sum=sum+nums[i];
        arr[i]=sum;
    }
    return arr;
}