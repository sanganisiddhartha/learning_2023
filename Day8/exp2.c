#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(const char *sourceFileName, const char *destinationFileName, int caseOption) {
    FILE *sourceFile, *destinationFile;
    int ch;

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        exit(1);
    }

    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create or open the destination file.\n");
        fclose(sourceFile);
        exit(1);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (caseOption == 1) { // Convert to uppercase
            ch = toupper(ch);
        } else if (caseOption == 2) { // Convert to lowercase
            ch = tolower(ch);
        } else if (caseOption == 3) { // Convert to purely uppercase
            if (isalpha(ch)) {
                ch = toupper(ch);
            }
        }

        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments. Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    int caseOption = 0;
    char *sourceFileName = argv[2];
    char *destinationFileName = argv[3];

    if (argv[1][0] == '-') {
        switch (argv[1][1]) {
            case 'u':
                caseOption = 1;
                break;
            case 'l':
                caseOption = 2;
                break;
            case 's':
                caseOption = 3;
                break;
            default:
                printf("Invalid option.\n");
                return 1;
        }
    }

    copyFile(sourceFileName, destinationFileName, caseOption);

    return 0;
}