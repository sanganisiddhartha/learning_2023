#include <stdio.h>

int main() {
    int hours, minutes, seconds, totalSeconds;

    printf("Enter the hours: ");
    scanf("%d", &hours);

    printf("Enter the minutes: ");
    scanf("%d", &minutes);

    printf("Enter the seconds: ");
    scanf("%d", &seconds);

    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}