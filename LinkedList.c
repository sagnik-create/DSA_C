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
    int data;
    struct node *next;
};

struct node* head = NULL;

int main() {
    int choice;
    do {
        printf("\nCircular Singly Linked List Operations\n");
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
    ptr->next = NULL;

    if (head == NULL) {
        head = ptr;
        ptr->next = head;  // Circular link
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = head;
    }
}

void insert_at_beg() {
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;

    if (head == NULL) {
        head = ptr;
        ptr->next = head;  // Circular link
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        ptr->next = head;
        temp->next = ptr;
        head = ptr;  // Update the head to the new beginning node
    }
}

void insert_at_end() {
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;

    if (head == NULL) {
        head = ptr;
        ptr->next = head;  // Circular link
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = head;
    }
}

void insert_at_pos() {
    struct node *ptr, *temp;
    int pos, i;
    ptr = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;

    printf("Enter the position where you want to insert the node: ");
    scanf("%d", &pos);

    if (pos == 1) {
        insert_at_beg();
        return;
    }

    temp = head;
    for (i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    ptr->next = temp->next;
    temp->next = ptr;
}

void delete_at_beg() {
    struct node *temp, *last;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = head;

    if (head->next == head) {
        head = NULL;
    } else {
        last = head;
        while (last->next != head) {
            last = last->next;
        }
        head = head->next;
        last->next = head;
    }

    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

void delete_at_end() {
    struct node *temp, *prev;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = head;

    if (head->next == head) {
        head = NULL;
        printf("Deleted node: %d\n", temp->data);
        free(temp);
        return;
    }

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

void delete_at_pos() {
    struct node *temp, *prev;
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
    for (i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp->next != head) {
        prev->next = temp->next;
        printf("Deleted node: %d\n", temp->data);
        free(temp);
    } else {
        printf("Position out of range!\n");
    }
}

void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Circular Singly Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
}
