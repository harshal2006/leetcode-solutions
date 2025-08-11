int missingNumber(int* nums, int numsSize) {
    int i,j,max,flag=1;
    max=nums[0];
    for (i=0;i<numsSize;i++){
        
        if(max<nums[i]){
            max=nums[i];

        }
    }
    for (i=0;i<=max;i++){
        flag=0;
        for(j=0;j<numsSize;j++){
            if (i==nums[j]){
                flag=1;
                break;
            }
        }
        if (flag==0){
        return i;
        }
    }
    return max+1;
    
}