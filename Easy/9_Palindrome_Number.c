bool isPalindrome(int x) {
    double rem,sum=0,temp=x;
    if (x<0){
        return false;
    }
    while(x>0){
        rem=x%10;
        x=x/10;
        sum=sum*10+rem;
    }
    if (sum==temp){
        return true ;
    }
    return false;

}