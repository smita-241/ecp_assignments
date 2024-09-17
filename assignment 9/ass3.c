#include <stdio.h>
#include <stdlib.h>

void copy_file_line_by_line(FILE *srcFile, FILE *destFile) {
    char buffer[1000];

    // Read each line from the source file and write it to the destination file
    while (fgets(buffer, sizeof(buffer), srcFile) != NULL) {
        fputs(buffer, destFile);  // Write line to destination file
    }
}

int main() {
    FILE *srcFile, *destFile;
    char srcFilename[100], destFilename[100];

    // Get the source file name from the user
    printf("Enter the source filename: ");
    scanf("%s", srcFilename);

    // Open source file in read mode
    srcFile = fopen(srcFilename, "r");
    
    // Check if the source file exists and can be opened
    if (srcFile == NULL) {
        printf("Error: Could not open source file %s\n", srcFilename);
        return 1;
    }

    // Get the destination file name from the user
    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    // Open destination file in write mode
    destFile = fopen(destFilename, "w");

    // Check if destination file can be opened
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s\n", destFilename);
        fclose(srcFile);  // Close source file if destination file fails to open
        return 1;
    }

    // Copy the content line by line from source file to destination file
    copy_file_line_by_line(srcFile, destFile);

    // Close both files
    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully from %s to %s.\n", srcFilename, destFilename);

    return 0;
}

