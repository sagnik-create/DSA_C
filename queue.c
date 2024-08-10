#include <stdio.h>
#define size 10

int main(){
    int queue[size],rear = -1,front = -1;
    void enque(){
        int item;
        printf("Enter the element which you want to enque:");
        scanf("%d",&item);
        if(rear == size-1){
            printf("queue is overflow");
        }
        else if(rear==-1 && front==-1){
            rear = front = 0;
            queue[rear] = item;
        }
        else {
            rear++;
            queue[rear] = item;
        }
    }
    void deque(){
        if(rear == -1 && front == -1){
            printf("queue is underflow");
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else{
            printf("Delete item %d",queue[front]);
            front++;
        }
        
    }
    void display(){
        if (rear == -1 && front == -1){
            printf("queue is empty");
        }
        else{
            int i;
            printf("queue element are:");
            for(i=front; i<rear+1;i++){
                printf("%d",queue[i]);
            }
        }
    }
    int choice;
    do
    {
        printf("\nqueue operation");
        printf("\n 1 for enque\n 2 for deque\n 3 for display\n 4 for exit");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Enter Valid choice");
            break;
        }
    } while (choice != 4);
    
    
}