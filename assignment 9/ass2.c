#include <stdio.h>

void copy_file(FILE *srcFile, FILE *destFile) {
    char ch;
    
    // Read each character from the source file and write it to the destination file
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile); // Write character to the destination file
        putchar(ch);         // Display character on the screen
    }
}

int main() {
    FILE *srcFile, *destFile;
    char srcFilename[100], destFilename[100], userInput[1000];
    
    // Get source file name from user
    printf("Enter the source filename: ");
    scanf("%s", srcFilename);
    
    // Open source file in read mode
    srcFile = fopen(srcFilename, "r");
    
    // Check if source file exists
    if (srcFile == NULL) {
        printf("Error: Could not open source file %s\n", srcFilename);
        return 1;
    }
    
    // Get destination file name from user
    printf("Enter the destination filename: ");
    scanf("%s", destFilename);
    
    // Open destination file in write mode
    destFile = fopen(destFilename, "w");
    
    // Check if destination file was opened successfully
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s\n", destFilename);
        fclose(srcFile);
        return 1;
    }
    
    // Copy contents from source file to destination file and display on screen
    printf("\nCopying contents from %s to %s and displaying it:\n", srcFilename, destFilename);
    copy_file(srcFile, destFile);
    
    // Close the source file as it is no longer needed
    fclose(srcFile);
    
    // Prompt user to enter more data to append to the destination file
    printf("\n\nEnter additional data to append to the destination file (Press Enter to finish):\n");
    getchar();  // To consume the newline left by scanf
    fgets(userInput, sizeof(userInput), stdin);
    
    // Write the additional data entered by user to the destination file
    fputs(userInput, destFile);
    
    // Close the destination file
    fclose(destFile);
    
    printf("\nData successfully copied and appended to %s.\n", destFilename);
    
    return 0;
}

