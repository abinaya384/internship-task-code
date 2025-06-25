#include <stdio.h>
#include <stdlib.h>
struct Student {
    int rollNumber;
    char name[50];
    int subject1, subject2, subject3, total;
};
int main() {
    int count;
    printf("Enter number of students: ");
    scanf("%d", &count);
    struct Student* students = (struct Student*)malloc(count * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int index = 0; index < count; index++) {
        printf("\n--- Student %d ---\n", index + 1);
        printf("Roll Number: ");
        scanf("%d", &students[index].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]", students[index].name);
        printf("Mark for Subject 1: ");
        scanf("%d", &students[index].subject1);
        printf("Mark for Subject 2: ");
        scanf("%d", &students[index].subject2);
        printf("Mark for Subject 3: ");
        scanf("%d", &students[index].subject3);
        students[index].total = students[index].subject1 + students[index].subject2 + students[index].subject3;
    }
    printf("\n=== Student Records ===\n");
    for (int index = 0; index < count; index++) {
        printf("\n--- Student %d ---\n", index + 1);
        printf("Roll Number : %d\n", students[index].rollNumber);
        printf("Name        : %s\n", students[index].name);
        printf("Subject 1   : %d\n", students[index].subject1);
        printf("Subject 2   : %d\n", students[index].subject2);
        printf("Subject 3   : %d\n", students[index].subject3);
        printf("Total Marks : %d\n", students[index].total);
    }
    free(students);
    return 0;
}
