#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 1;  
    }

    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;  
            else
                days = 28;  
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;  
            break;
        default:
            days = 31; 
            break;
    }

    printf("Number of days in the given month: %d\n", days);

    return 0;
}