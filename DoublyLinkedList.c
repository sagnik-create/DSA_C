#include <stdio.h>
#include <stdlib.h>

void create();
void insert_at_beg();
void insert_at_end();
void insert_at_pos();
void delete_at_beg();
void delete_at_end();
void delete_at_pos();
void display();

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct Node* head = NULL;

int main(){
    int choice;
    do{
        
        printf("Linked List Operations \n");
        printf("1. Create a new Node\n 2.Insert the node at beginning \n3.Insert the node at end\n 4.Insert the node at position\n 5.Delete the node at beginning \n 6.Delete the node at end\n 7. Delete the node at position\n 8. Dislay the node 9. Exit ");
        printf("Enter your choice");
        scanf("%d",choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert_at_beg();
            break;
        case 3:
            insert_at_end();
            break;
        case 4:
            insert_at_pos();
            break;
        case 5:
            delete_at_beg();
            break;
        case 6:
            delete_at_end();
            break;
        case 7:
            delete_at_pos();
            break;
        case 8:
            display();
            break;
        case 9:
            exit();
            break;


        
        default:
            break;
        }
    }while (choice !=9)
    
}

void create(){
     struct node *ptr,*temp;
     ptr= (struct node*)malloc(sizeof( struct node));
     printf("enter node data");
     scanf("%d", &ptr->data);

     if(head==NULL){
        head=temp=ptr;
     }
     else{
        temp->next = ptr;
        ptr->prev = temp;
        temp = ptr;
     }

};
void insert_at_beg(){
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof( struct node));
    printf("Enter Node Data");
    scanf("%d",ptr->data);
    if(head == NULL){
        head = ptr;
    }
    else{
        ptr->prev = NULL;
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
};

void insert_at_end(){
    struct node *ptr,*temp;
     ptr= (struct node*)malloc(sizeof( struct node));
     printf("enter node data");
     scanf("%d", &ptr->data);
     ptr->prev=ptr->next=NULL;
     temp = head;
     while(temp->next!=NULL){
        temp = temp->next;
     }
     temp->next=ptr;
     ptr->prev=temp;
     ptr->next = NULL;

    
    };

void insert_at_pos(){
    struct node *ptr,*temp,pos,i;
     ptr= (struct node*)malloc(sizeof( struct node));
     printf("enter node data");
     scanf("%d", &ptr->data);
     printf("Enter the position where you want to insert the node");
     scanf("%d",pos);
     ptr->prev=ptr->next=NULL;
     temp = head;
     for(i=0;i<pos;i++){
        temp = temp->next;
     }
     

};
void delete_at_beg();
void delete_at_end();
void delete_at_pos();
void display(){
    while (ptr != NULL)
    {
        printf("%d",ptr->data);
    }
    
};
