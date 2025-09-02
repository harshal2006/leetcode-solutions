int subtractProductAndSum(int n) {
    int i,prod=1,sum=0,result=0,rem=0;
    
    
    while(n>0){
        rem=n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
    }
    result=prod-sum;
    return result;
    
}