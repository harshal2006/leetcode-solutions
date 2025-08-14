int dominantIndex(int* nums, int numsSize) {
    int i,max=nums[0],temp=0;
    for(i=0;i<numsSize;i++){
        if (max<nums[i]){
            max=nums[i];
            temp=i;
        }
    }
    for (i=0;i<numsSize;i++){
        if(max<2*nums[i] && i !=temp )
        {
            return -1;
        }
        
        
    }
    return temp;
}
    
