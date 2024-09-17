#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a node
struct Node* create() {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    return ptr;
}

// Function to insert a node at the end
void insert_at_end() {
    struct Node* ptr = create();
    if (head == NULL) {
        head = ptr;
        ptr->next = head;
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = head;
    }
}

// Function to insert a node at the beginning
void insert_at_beg() {
    struct Node* ptr = create();
    if (head == NULL) {
        head = ptr;
        ptr->next = head;
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = head;
        head = ptr;
    }
}

// Function to add a node at a given position (1-based index)
void addNodeAtPosition() {
    int position;
    printf("Enter the position: ");
    scanf("%d", &position);

    if (position < 1) {
        printf("Position should be >= 1\n");
        return;
    }

    if (position == 1) {
        insert_at_beg();
        return;
    }

    struct Node* ptr = create();
    struct Node* temp = head;
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
        if (temp == head) {
            printf("Position out of bounds\n");
            return;
        }
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

// Function to remove a node from the beginning
void removeNodeBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        while (temp->next != head) {
            temp = temp->next;
        }
        struct Node* toDelete = head;
        temp->next = head->next;
        head = head->next;
        free(toDelete);
    }
}

// Function to remove a node from the end
void removeNodeEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        struct Node* prev = NULL;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        free(temp);
    }
}

// Function to remove a node from a given position (1-based index)
void removeNodeAtPosition() {
    int position;
    printf("Enter the position to remove: ");
    scanf("%d", &position);

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (position == 1) {
        removeNodeBeginning();
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;
    for (int i = 1; i < position; i++) {
        prev = temp;
        temp = temp->next;
        if (temp == head) {
            printf("Position out of bounds\n");
            return;
        }
    }
    prev->next = temp->next;
    free(temp);
}

// Function to display the circular linked list
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}

// Main function with switch case for user input
int main() {
    int choice;
    
    do {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Create a node\n");
        printf("2. Insert node at the end\n");
        printf("3. Insert node at the beginning\n");
        printf("4. Insert node at a specific position\n");
        printf("5. Remove node from the beginning\n");
        printf("6. Remove node from the end\n");
        printf("7. Remove node from a specific position\n");
        printf("8. Display the list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_at_end();
                break;

            case 2:
                insert_at_end();
                break;

            case 3:
                insert_at_beg();
                break;

            case 4:
                addNodeAtPosition();
                break;

            case 5:
                removeNodeBeginning();
                break;

            case 6:
                removeNodeEnd();
                break;

            case 7:
                removeNodeAtPosition();
                break;

            case 8:
                display();
                break;

            case 9:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 9);

    return 0;
}