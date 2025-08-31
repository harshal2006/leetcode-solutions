int maxProduct(int* nums, int numsSize) {
    int i,j,prod,max=0;
    for (i=0;i<numsSize;i++){
        prod=0;
        for(j=i;j<numsSize;j++){
            prod=(nums[i]-1)*(nums[j]-1);
            if(prod>max && i!=j){
                max=prod;
            }
        }
        
    }
    return max;
}