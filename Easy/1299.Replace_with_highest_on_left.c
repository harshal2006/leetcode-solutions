/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    *returnSize=arrSize;
    int *arr1 = (int*) malloc ((*returnSize)*sizeof(int));
    int i,j,max=-1;
    
    for (i=arrSize-1;i>=0;i--){
        arr1[i]=max;
        if (arr[i]>max)
        max=arr[i];
        
        

        
    }

    arr1[arrSize-1]=-1;
    return arr1;
}