#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Open the source file in read mode
    source = fopen("source_file.txt", "r");
    if (source == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destination = fopen("destination_file.txt", "w");
    if (destination == NULL) {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(source);
    fclose(destination);

    return 0;
}