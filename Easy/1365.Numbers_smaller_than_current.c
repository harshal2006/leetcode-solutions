/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *arr= (int*) malloc ((*returnSize)*sizeof(int));
    int i,j;
    for (i=0;i<numsSize;i++){
        int count=0;
        for (j=0;j<numsSize;j++){
            if (nums[i]>nums[j]){
                count++;

            }
        }
        arr[i]=count;
        
    }
    return arr;
}