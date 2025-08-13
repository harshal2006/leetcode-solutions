/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
        int* arr = (int*)malloc(2 * sizeof(int));
        *returnSize=2;
        arr[0]=-1;
        arr[1]=-1;
        int i,temp=-1;
        for (i=0;i<numsSize;i++){
            if (nums[i]==target){
                arr[0]=i;
                temp=i;
                break;
            }
        }
        if (temp == -1) {
        return arr;}
        for (i=numsSize-1;i>=temp;i--){
            if (nums[i]==target){
                arr[1]=i;
                break;

            }
        }
        
        return arr;

}
