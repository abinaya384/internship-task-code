#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
// Create new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
// Insert at end
void insertNode(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL)
        current = current->next;
    current->next = newNode;
}
// Reverse linked list
void reverseList(struct Node** head) {
    struct Node *previous = NULL, *current = *head, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *head = previous;
}
// Print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
// Main function
int main() {
    struct Node* head = NULL;
    int inputValue;
    printf("Enter node values (enter -999 to stop):\n");
    while (1) {
        printf("Enter value: ");
        scanf("%d", &inputValue);
        if (inputValue == -999)
            break;
        insertNode(&head, inputValue);
    }
    printf("\nOriginal linked list: ");
    printList(head);
    reverseList(&head);
    printf("Reversed linked list: ");
    printList(head);
   return 0;
}


