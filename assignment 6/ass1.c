#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string (not part of standard C, implemented here)
void strrev(char* str) {
    int len = strlen(str);
    int i;
    char temp;
    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Main function to demonstrate string library functions
int main() {
    char str1[100], str2[100];
    char *token;
    int len;

    // Demonstrate strlen()
    strcpy(str1, "Hello, World!");
    len = strlen(str1);
    printf("Length of \"%s\" is %d.\n", str1, len);

    // Demonstrate strcpy()
    strcpy(str2, str1);
    printf("str2 after strcpy(): \"%s\"\n", str2);

    // Demonstrate strcat()
    strcat(str2, " How are you?");
    printf("str2 after strcat(): \"%s\"\n", str2);

    // Demonstrate strcmp()
    int cmp = strcmp(str1, str2);
    printf("Comparison of str1 and str2: %d\n", cmp);

    // Demonstrate stricmp() (use _stricmp() in MSVC, strcasecmp() in POSIX)
    #ifdef _MSC_VER
    int icmp = _stricmp("hello", "HELLO");
    #else
    int icmp = strcasecmp("hello", "HELLO");
    #endif
    printf("Case-insensitive comparison: %d\n", icmp);

    // Demonstrate strrev()
    strrev(str2);
    printf("str2 after strrev(): \"%s\"\n", str2);

    // Demonstrate strchr()
    char *chPtr = strchr(str1, 'W');
    if (chPtr) {
        printf("Character 'W' found at position: %ld\n", chPtr - str1);
    } else {
        printf("Character 'W' not found.\n");
    }

    // Demonstrate strstr()
    char *substrPtr = strstr(str2, "How");
    if (substrPtr) {
        printf("Substring \"How\" found at position: %ld\n", substrPtr - str2);
    } else {
        printf("Substring \"How\" not found.\n");
    }

    // Demonstrate strncpy()
    strncpy(str2, "Copy this text", 10);
    str2[10] = '\0'; // Ensure null termination
    printf("str2 after strncpy(): \"%s\"\n", str2);

    // Demonstrate strncat()
    strncat(str2, " and more", 9);
    printf("str2 after strncat(): \"%s\"\n", str2);

    // Demonstrate strncmp()
    int ncmp = strncmp("Hello", "Hello, World!", 5);
    printf("Comparison of first 5 characters: %d\n", ncmp);

    // Demonstrate strtok()
    char text[] = "This is a test";
    token = strtok(text, " ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

