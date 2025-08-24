int findPeakElement(int* nums, int numsSize) {
    int max=nums[0],i,j,peak=0;
    for (i=0;i<numsSize;i++){
        if (nums[i]>max){
            max=nums[i];
            peak=i;
        }
    }
    return peak;
    
}