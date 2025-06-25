#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int inputValue) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = inputValue;
    newNode->next = NULL;
    return newNode;
}
void appendNode(struct Node** headRef, int inputValue) {
    struct Node* newNode = createNode(inputValue);
    if (*headRef == NULL) {
        *headRef = newNode;
    } else {
        struct Node* temp = *headRef;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}
struct Node* findMiddle(struct Node* head) {
    struct Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main() {
    struct Node* head = NULL;
    int value;
    printf("Enter node values (enter -999 to stop):\n");
    while (1) {
        printf("Enter value: ");
        scanf("%d", &value);
        if (value == -999) break;
        appendNode(&head, value);
    }
    if (head) {
        struct Node* midNode = findMiddle(head);
        printf("\nMiddle node value: %d\n", midNode->data);
    } else {
        printf("List is empty.\n");
    }
    return 0;
}
