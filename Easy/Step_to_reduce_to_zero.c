int numberOfSteps(int num) {
    int i;
    int count=0;
    while(num>0){
        if(num%2==0){
            num=num/2;
            count++;
        }
        else{
            num--;
            count++;
        }
    }
    return count;
    
}