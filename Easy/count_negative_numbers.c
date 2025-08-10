int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int row=gridSize;
    int col= *gridColSize;
    int i,j,count=0;
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            if (grid[i][j]<0){
                count++;
            }
        }
    }
    return count;

}