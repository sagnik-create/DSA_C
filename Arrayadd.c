#include <stdio.h>

int main(){
    int n1;
    printf("Enter the size of First Array");
    scanf("%d",&n1);
    int n2;
    printf("Enter the size of Second Array");
    scanf("%d",&n2);

    int arr1[n1], arr2[n2],i,j;
    printf("Enter the values of First array");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the value of Second array");
    for(j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }

    int k = n1+n2,l;

    int arrm[k];

    
    
    return 0;
}