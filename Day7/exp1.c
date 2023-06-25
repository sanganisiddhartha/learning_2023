#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int index) {
    char rollnoStr[5];
    char name[20];
    char marksStr[10];

    sscanf(input, "%s %s %s", rollnoStr, name, marksStr);

    students[index].rollno = atoi(rollnoStr);
    strncpy(students[index].name, name, sizeof(students[index].name));
    students[index].marks = atof(marksStr);
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    printf("Enter the student details:\n");

    for (int i = 0; i < numStudents; i++) {
        char input[50];
        printf("Student %d: ", i + 1);
        scanf("%s", input);
        parseString(input, students, i);
    }

    printf("Student Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);
    return 0;
}