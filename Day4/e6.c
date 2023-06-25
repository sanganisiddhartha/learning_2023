#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}


int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    } else {
        return daysInMonth[month - 1];
    }
}


int calculateElapsedDays(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear) {
    int days = 0;


    for (int month = startMonth; month <= 12; month++) {
        days += getDaysInMonth(month, startYear);
    }
    days -= startDay;


    for (int month = 1; month < endMonth; month++) {
        days += getDaysInMonth(month, endYear);
    }
    days += endDay;


    for (int year = startYear + 1; year < endYear; year++) {
        days += isLeapYear(year) ? 366 : 365;
    }

    return days;
}

int main() {

    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;

    printf("Enter the starting date (DD MM YYYY): ");
    scanf("%d %d %d", &startDay, &startMonth, &startYear);

    printf("Enter the ending date (DD MM YYYY): ");
    scanf("%d %d %d", &endDay, &endMonth, &endYear);


    int elapsedDays = calculateElapsedDays(startDay, startMonth, startYear, endDay, endMonth, endYear);


    printf("Number of days elapsed: %d\n", elapsedDays);

    return 0;
}