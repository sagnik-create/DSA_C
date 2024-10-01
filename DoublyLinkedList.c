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

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node* head = NULL;

int main() {
    int choice;
    do {
        printf("\nLinked List Operations \n");
        printf("1. Create a new Node\n");
        printf("2. Insert the node at beginning\n");
        printf("3. Insert the node at end\n");
        printf("4. Insert the node at position\n");
        printf("5. Delete the node at beginning\n");
        printf("6. Delete the node at end\n");
        printf("7. Delete the node at position\n");
        printf("8. Display the list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
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
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 9);

    return 0;
}

void create() {
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data: ");
    scanf("%d", &ptr->data);
    ptr->next = ptr->prev = NULL;

    if (head == NULL) {
        head = ptr;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
    }
}

void insert_at_beg() {
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data: ");
    scanf("%d", &ptr->data);
    ptr->next = ptr->prev = NULL;

    if (head == NULL) {
        head = ptr;
    } else {
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
}

void insert_at_end() {
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data: ");
    scanf("%d", &ptr->data);
    ptr->next = ptr->prev = NULL;

    if (head == NULL) {
        head = ptr;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
    }
}

void insert_at_pos() {
    struct node *ptr, *temp;
    int pos, i;
    ptr = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data: ");
    scanf("%d", &ptr->data);
    ptr->next = ptr->prev = NULL;

    printf("Enter the position where you want to insert the node: ");
    scanf("%d", &pos);

    if (pos == 1) {
        insert_at_beg();
        return;
    }

    temp = head;
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    

    ptr->next = temp->next;
    ptr->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = ptr;
    }
    temp->next = ptr;
}

void delete_at_beg() {
    struct node *temp;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

void delete_at_end() {
    struct node *temp;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        head = NULL; 
    }

    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

void delete_at_pos() {
    struct node *temp;
    int pos, i;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Enter the position of the node to delete: ");
    scanf("%d", &pos);

    if (pos == 1) {
        delete_at_beg();
        return;
    }

    temp = head;
    for (i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }


    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
