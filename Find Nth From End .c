#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void appendNode(struct Node** head, int value) {
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
int getValueFromEnd(struct Node* head, int positionFromEnd) {
    struct Node* lead = head;
    struct Node* follow = head;
    int steps = 0;
    while (steps < positionFromEnd) {
        if (lead == NULL) return -1;
        lead = lead->next;
        steps++;
    }
    while (lead != NULL) {
        lead = lead->next;
        follow = follow->next;
    }
    return (follow != NULL) ? follow->data : -1;
}
int main() {
    struct Node* head = NULL;
    int value, positionFromEnd;
    printf("Enter node values (-999 to stop):\n");
    while (1) {
        printf("Enter value: ");
        scanf("%d", &value);
        if (value == -999) break;
        appendNode(&head, value);
    }
    printf("Enter position from end: ");
    scanf("%d", &positionFromEnd);
    int result = getValueFromEnd(head, positionFromEnd);
    printf("Value at %d-th node from the end: %d\n", positionFromEnd, result);
    return 0;
}
