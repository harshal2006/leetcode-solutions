int minOperations(int* nums, int numsSize, int k) {
    int i,count=0;
    for(i=0;i<numsSize;i++){
        if (nums[i]<k){
            count++;
        }
        
    }
    return count;
    
}