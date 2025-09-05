int findNumbers(int* nums, int numsSize) {
    int i,count1=0;
    for (i=0;i<numsSize;i++){
        int count=0;
        while(nums[i]>0){
            nums[i]=nums[i]/10;
            count++;
        }
        if (count%2==0){
            count1++;
        }
    }
    return count1;
}