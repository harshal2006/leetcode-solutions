/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize=candiesSize;
    bool *arr=(bool*) malloc ((*returnSize)*sizeof(bool));
    int i,j,max=candies[0];
    for (i=0;i<candiesSize;i++){
        if(max<candies[i]){
            max=candies[i];
        }
    }
    for (i=0;i<candiesSize;i++){
        if (candies[i]+extraCandies>=max){
            arr[i]=true ;
            
        }
        else {
            arr[i]=false;
        }
    }
    return arr;
}