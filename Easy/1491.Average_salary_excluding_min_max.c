double average(int* salary, int salarySize) {
    int max=salary[0],min=salary[0],i;
    double count=0,sum=0;
    for (i=0;i<salarySize;i++){
        if (max<salary[i]){
            max=salary[i];
        }
        if (min>salary[i]){
            min=salary[i];
        }
    }
    for (i=0;i<salarySize;i++){
        if (salary[i]!=min && salary[i]!=max){
            sum=sum+salary[i];
            count++;
        }
    }
    return sum/count;
}