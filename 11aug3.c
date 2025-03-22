#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    int section;
};
void addStudent(struct Student students[], int *count) 
    {
    struct Student newStudent;
    printf("\nEnter details of the student:\n");
    printf("Roll No: ");
    scanf("%d", &newStudent.rollNo);
    printf("Name: ");
    scanf(" %[^\n]", newStudent.name);
    printf("section: ");
    scanf("%d", &newStudent.section);
    students[*count] = newStudent;
    (*count)++;
    printf("Student added successfully.\n");
}
void displayStudents(struct Student students[], int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("section: %d\n", students[i].section);
    }
}
int main() {
    struct Student students[100]; 
    int count = 0;
    int choice;
     printf("Student Database Management System\n"); 
    do {
        printf("1. Add Student\n2. Display Students\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}