int heightChecker(int* heights, int heightsSize) {
    int i ,j,temp,count=0;
    int arr[heightsSize];
    for (i=0;i<heightsSize;i++){
        arr[i]=heights[i];
    }
    for (i=0;i<heightsSize;i++){
        for(j=0;j<heightsSize-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
    }
    for (i=0;i<heightsSize;i++){
        if (arr[i]!=heights[i]){
            count++;
        }
    }
    return count;
}