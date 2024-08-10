#include <stdio.h>

int main(){
    int size;
    printf("Enter The Number");
    scanf("%d",&size);
    int top = -1;
    int stack[size];
    void push(){
        if (top == size-1){
            printf("Stack Overflow");
        }
        else{
            int data;
            printf("Enter the element which you want to push");
            scanf("%d",&data);
            top++;
            stack[top] = data;
        }
    }

    void pop(){
        if(top == -1){
            printf("Stack Underflow");
        }

        else{
            int i;
            for(i = top; i>=0; i--){
                printf("%d",stack[i]);
            }
        }
    }
    void display(){
        if(top == -1){
            printf("Stack Underflow");
        }
        else{
            int i;
            for(i=top;i>=0;i--){
                printf("%d",stack[i]);
            }
        }
    }
    int choice;
    printf("Operation Perform on Stack");
    printf("\n");
    printf("1 for Push \n 2 for Pop \n 3 for Display \n 4 for exit \n");
    printf("Enter your Choice");
    scanf("%d",&choice);
    do
    {
        switch (choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                break;
        }
    } while (choice != 4);

}