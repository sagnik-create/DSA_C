#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

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

void create() {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("Node created.\n");
}

void display() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        struct node* temp = head;
        printf("Linked List: ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void insert_at_bg() {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    head = new_node;
    printf("Node inserted at the beginning.\n");
}

void insert_at_ed() {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("Node inserted at the end.\n");
}

void insert_at_ps() {
    int pos, i = 1;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos == 1) {
        new_node->next = head;
        head = new_node;
        printf("Node inserted at position %d.\n", pos);
        return;
    }

    struct node* temp = head;
    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of bounds.\n");
    } else {
        new_node->next = temp->next;
        temp->next = new_node;
        printf("Node inserted at position %d.\n", pos);
    }
}

void delete_at_bg() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        struct node* temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted at the beginning.\n");
    }
}

void delete_at_ed() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Node deleted at the end.\n");
    } else {
        struct node* temp = head;
        struct node* prev = NULL;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("Node deleted at the end.\n");
    }
}

void delete_at_pos() {
    int pos, i = 1;
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (pos == 1) {
        struct node* temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted at position %d.\n", pos);
        return;
    }

    struct node* temp = head;
    struct node* prev = NULL;
    while (i < pos && temp != NULL) {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of bounds.\n");
    } else {
        prev->next = temp->next;
        free(temp);
        printf("Node deleted at position %d.\n", pos);
    }
}
