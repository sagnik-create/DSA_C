#include <stdio.h>
int update(int arr[], int lmnt, int val){
    if (arr[lmnt] == val){
        return 0;
    }
    else{
        return arr[lmnt] = val;
    }
}
int main(){
    int size;
    printf("Array Size: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int lmnt;
    printf("element no.: ");
    scanf("%d",&lmnt);
    int val;
    printf("Update Value: ");
    scanf("%d",&val);
    update(arr,lmnt-1,val);
    for (int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}