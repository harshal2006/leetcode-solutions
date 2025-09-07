/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    
   int *arr= (int*) malloc(numsSize*sizeof(int));
   int i,j,k=0;
   for(i=0;i<numsSize;i++){
    int count=0;
    for (j=0;j<numsSize;j++){
        if (nums[i]==nums[j] && i!=j){
            count++;
        }
    }
    if (count==0){
        
        arr[k]=nums[i];
        k++;
    }
   }
   *returnSize=k;
   return arr;
}