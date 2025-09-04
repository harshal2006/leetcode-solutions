int tribonacci(int n) {
    if (n==0){
        return 0;
    }
    if (n==1||n==2){
        return 1;
    }
    int i;
    int a=0,b=1,c=1,sum;
    for (i=3;i<=n;i++){
        sum=a+b+c;
        a=b;
        b=c;
        c=sum;

    }
    return c;
}