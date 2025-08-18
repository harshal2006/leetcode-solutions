int countDigits(int num) {
    int i,count=0,digit=0,temp=num,rem;
    while(num>0){
        num=num/10;
        digit++;

    }
    num=temp;
    for (i=0;i<digit;i++){
        rem=num%10;
        num=num/10;
        if (temp%rem==0){
            count++;
        }
    }
    return count;
}