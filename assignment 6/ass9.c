#include <stdio.h>
#include <string.h>

// Function to replace all occurrences of 'find' with 'replace' in 'source'
void findAndReplace(char *source, const char *find, const char *replace) {
    char buffer[1024]; // Buffer to hold the result
    char *pos;
    int findLen = strlen(find);
    int replaceLen = strlen(replace);
    int len;

    // Ensure buffer is empty
    buffer[0] = '\0';

    // Initial position
    pos = source;

    while ((pos = strstr(pos, find)) != NULL) {
        // Copy the part before the 'find' substring
        len = pos - source;
        strncat(buffer, source, len);
        
        // Append the 'replace' substring
        strcat(buffer, replace);

        // Move past the replaced part
        source = pos + findLen;
        pos = source; // Update position
    }
    
    // Append any remaining part of the original string
    strcat(buffer, source);

    // Copy the result back to the original source
    strcpy(source, buffer);
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


