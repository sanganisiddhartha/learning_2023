#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};


int compareStudents(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;


    if (studentA->marks < studentB->marks) {
        return 1;
    } else if (studentA->marks > studentB->marks) {
        return -1;
    }

    return 0;
}

void displayStudents(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int numStudents = 5;
    struct Student students[] = {
        {1001, "Nihal", 88.5},
        {1002, "Sam", 96.0},
        {1003, "Swapn", 76.3},
        {1004, "Shub", 92.0},
        {1005, "Radh", 88.7}
    };


    qsort(students, numStudents, sizeof(struct Student), compareStudents);


    displayStudents(students, numStudents);

    return 0;
}