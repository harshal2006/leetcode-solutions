int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
int col= *accountsColSize;
int i,j,max=accounts[0][0],sum;
for (i=0;i<accountsSize;i++){
    sum=0;
    for(j=0;j<col;j++){
        sum=sum+ accounts[i][j];
        if (sum>max){
            max=sum;
        }

    }
}
return max;
 

}