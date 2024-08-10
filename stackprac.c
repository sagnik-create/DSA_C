#include <stdio.h>
#define size 10; 

int main(){
    int size;
    printf("Enter the Size of stack");
    scanf("%d",&size);
    int front = -1
    void push(){
        if(front == size-1){
            printf("Stack OverFlow");
        }
        else
        {
            int data;
            printf("Enter the element which you want to enter in stack");
            scanf("%d",data);
            top++;
            stack[top]=data;
        }
        
    }
    void pop(){
        if (front == -1){
            printf("Stack Underflow");
        }
    }
}