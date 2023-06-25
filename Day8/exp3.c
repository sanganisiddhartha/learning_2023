#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
} LogEntry;

void extractLogEntries(LogEntry logEntries[], int *numEntries) {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open data file.\n");
        *numEntries = 0;
        return;
    }

    char line[MAX_LINE_LENGTH];
    char *token;
    int entryCount = 0;

    // Read each line from the file and extract the log entry fields
    while (fgets(line, sizeof(line), file) != NULL) {
        token = strtok(line, ",");
        logEntries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].timestamp, token);

        entryCount++;
    }

    *numEntries = entryCount;

    fclose(file);
}

void displayLogEntries(LogEntry logEntries[], int numEntries) {
    printf("Log Entries:\n");
    printf("------------------------------------------------------------------\n");
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Timestamp\n");
    printf("------------------------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%-8d %-9s %-12.1f %-8d %-6d %-8s\n",
               logEntries[i].entryNo,
               logEntries[i].sensorNo,
               logEntries[i].temperature,
               logEntries[i].humidity,
               logEntries[i].light,
               logEntries[i].timestamp);
    }

    printf("------------------------------------------------------------------\n");
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int numEntries;

    // Extract log entries from the CSV file
    extractLogEntries(logEntries, &numEntries);

    // Display the log entries
    displayLogEntries(logEntries, numEntries);

    return 0;
}