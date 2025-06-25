#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char studentName[50];
    int markSubject1;
    int markSubject2;
    int markSubject3;
    int totalMarks;
};
int main() {
    struct Student studentRecord;
    printf("Enter Roll Number: ");
    scanf("%d", &studentRecord.rollNumber);
    printf("Enter Name: ");
    scanf(" %[^\n]", studentRecord.studentName);  
    printf("Enter Mark for Subject 1: ");
    scanf("%d", &studentRecord.markSubject1);
    printf("Enter Mark for Subject 2: ");
    scanf("%d", &studentRecord.markSubject2);
    printf("Enter Mark for Subject 3: ");
    scanf("%d", &studentRecord.markSubject3);
    studentRecord.totalMarks = studentRecord.markSubject1 +studentRecord.markSubject2 +
                studentRecord.markSubject3;
    printf("\n--- Student Record ---\n");
    printf("Roll Number : %d\n", studentRecord.rollNumber);
    printf("Name        : %s\n", studentRecord.studentName);
    printf("Subject 1   : %d\n", studentRecord.markSubject1);
    printf("Subject 2   : %d\n", studentRecord.markSubject2);
    printf("Subject 3   : %d\n", studentRecord.markSubject3);
    printf("Total Marks : %d\n", studentRecord.totalMarks);
    return 0;
}
