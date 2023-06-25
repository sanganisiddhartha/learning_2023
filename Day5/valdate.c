#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;  // Leap year
            else
                return 0;  // Not a leap year
        }
        return 1;  // Leap year
    }
    return 0;  // Not a leap year
}

int isValidDate(int day, int month, int year) {
    // Check if year is valid (positive number)
    if (year <= 0)
        return 0;

    // Check if month is valid (between 1 and 12)
    if (month < 1 || month > 12)
        return 0;

    // Check if day is valid based on the month
    int maxDays;
    switch (month) {
        case 2:
            maxDays = isLeapYear(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            maxDays = 30;
            break;
        default:
            maxDays = 31;
            break;
    }

    if (day < 1 || day > maxDays)
        return 0;

    return 1; 
}

int main() {
    int day, month, year;

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    if (isValidDate(day, month, year))
        printf("The date is valid.\n");
    else
        printf("The date is invalid.\n");

    return 0;
}