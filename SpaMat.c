#include <stdio.h>

int main(){
    int arr[3][3] = {{0,0,1},{0,3,0},{2,0,0}};
    int count=0;
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j] != 0 ){
                count++;
            }
        }
    }
    for(int k=0;k<3;k++){
        for(int l=0; l<count; l++){
            arr[1][count] = i;
            arr[2][count] = j;
            arr[3][count] = arr[i][j];
        }
    }
    for(int k=0;k<3;k++){
        for(int l=0; l<count; l++){
            printf("%d ",arr[k][l]);
        }
    }
}
