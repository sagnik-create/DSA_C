#include <stdio.h>
#include <stdlib.h> 

struct node{
    int data;
    struct node* next;
};

struct node *head = NULL;

void create();
void display();
void insert_at_bg();
void insert_at_ed();
void insert_at_ps();
void delete_at_bg();
void delete_at_ed();
void delete_at_pos();

int main() {
    int choice;

    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Create a New Node\n");
        printf("2. Insert a Node at Beginning\n");
        printf("3. Insert a Node at End\n");
        printf("4. Insert a Node at Position\n");
        printf("5. Delete a Node at Beginning\n");
        printf("6. Delete a Node at End\n");
        printf("7. Delete a Node at Position\n");
        printf("8. Display Linked List\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insert_at_bg();
                break;
            case 3:
                insert_at_ed();
                break;
            case 4:
                insert_at_ps();
                break;
            case 5:
                delete_at_bg();
                break;
            case 6:
                delete_at_ed();
                break;
            case 7:
                delete_at_pos();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void create(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (head == NULL){
        head = 
    }
}