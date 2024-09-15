#include <stdio.h>

// Function to get the length of a string
int strLen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy a substring
void strCopy(char *dest, const char *src, int length) {
    for (int i = 0; i < length; i++) {
        dest[i] = src[i];
    }
    dest[length] = '\0'; // Null-terminate the string
}

// Function to concatenate two strings
void strConcat(char *dest, const char *src) {
    int destLen = strLen(dest);
    int srcLen = strLen(src);
    for (int i = 0; i < srcLen; i++) {
        dest[destLen + i] = src[i];
    }
    dest[destLen + srcLen] = '\0'; // Null-terminate the string
}

// Function to find and replace a substring within a string
void findAndReplace(char *source, const char *find, const char *replace) {
    int srcLen = strLen(source);
    int findLen = strLen(find);
    int replaceLen = strLen(replace);
    char buffer[1024]; // Buffer to hold the result
    int bufferIndex = 0;
    
    for (int i = 0; i < srcLen; ) {
        // Check if the substring at the current position matches 'find'
        int match = 1;
        for (int j = 0; j < findLen; j++) {
            if (source[i + j] != find[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            // Replace the found substring with 'replace'
            strCopy(buffer + bufferIndex, replace, replaceLen);
            bufferIndex += replaceLen;
            i += findLen;
        } else {
            // Copy the current character to buffer
            buffer[bufferIndex++] = source[i++];
        }
    }
    buffer[bufferIndex] = '\0'; // Null-terminate the result
    
    // Copy the result back to the source
    strCopy(source, buffer, bufferIndex);
}

int main() {
    char source[1024] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    printf("Original string: %s\n", source);

    findAndReplace(source, find, replace);

    printf("Modified string: %s\n", source);

    return 0;
}

