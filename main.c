#include <stdio.h>

int main() {
  int n;
  printf("Enter the size of Array");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the element");
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  int max = arr[0];
  for(int i=0; i<n; i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  int min = arr[0];
  for(int i=0; i<n; i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }
  printf("The maximum element is %d \n",max);
  printf("The minimum element is %d \n",min);
  return 0;
}