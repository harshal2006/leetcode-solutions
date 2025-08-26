/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *arr =(int*) malloc ((*returnSize)*sizeof(int));
    int i, right=numsSize-1,left=0;
    for(i=0;i<numsSize;i++){
        if (nums[i]%2==0){
            arr[left++]=nums[i];
        }
        else {
            arr[right--]=nums[i];

        }
    }
    return arr;
}