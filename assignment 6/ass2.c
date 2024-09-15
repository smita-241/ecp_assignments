#include <stdio.h>
#include <ctype.h>

// Function to simulate strlen()
size_t my_strlen(const char* str) {
    const char* s = str;
    while (*s) ++s;
    return s - str;
}

// Function to simulate strcpy()
char* my_strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*d++ = *src++));
    return dest;
}

// Function to simulate strcat()
char* my_strcat(char *dest, const char *src) {
    char *d = dest;
    while (*d) ++d;  // Move to the end of dest
    while ((*d++ = *src++));
    return dest;
}

// Function to simulate strcmp()
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        ++str1;
        ++str2;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

// Function to simulate stricmp() (case-insensitive comparison)
int my_stricmp(const char *str1, const char *str2) {
    while (tolower((unsigned char)*str1) == tolower((unsigned char)*str2)) {
        if (*str1 == '\0') return 0;
        ++str1;
        ++str2;
    }
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}

// Function to simulate strrev() (reverse a string)
char* my_strrev(char* str) {
    char *start = str;
    char *end = str;
    char temp;

    while (*end) ++end;
    --end;

    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    return str;
}

// Function to simulate strchr()
char* my_strchr(const char *str, int ch) {
    while (*str) {
        if (*str == (char)ch) return (char*)str;
        ++str;
    }
    return NULL;
}

// Function to simulate strstr()
char* my_strstr(const char *str, const char *substr) {
    const char *p1;
    const char *p2;

    while (*str) {
        p1 = str;
        p2 = substr;

        while (*p2 && (*p1 == *p2)) {
            ++p1;
            ++p2;
        }

        if (!*p2) return (char*)str;

        ++str;
    }
    return NULL;
}

int main() {
    char str1[100], str2[100];
    char *result;

    // Demonstrate strlen()
    my_strcpy(str1, "Hello, World!");
    printf("Length of \"%s\" is %zu.\n", str1, my_strlen(str1));

    // Demonstrate strcpy()
    my_strcpy(str2, "Goodbye!");
    printf("str2 after strcpy(): \"%s\"\n", str2);

    // Demonstrate strcat()
    my_strcat(str2, " See you!");
    printf("str2 after strcat(): \"%s\"\n", str2);

    // Demonstrate strcmp()
    int cmp = my_strcmp("Hello", "Hello");
    printf("Comparison of \"Hello\" and \"Hello\": %d\n", cmp);

    // Demonstrate stricmp()
    int icmp = my_stricmp("Hello", "HELLO");
    printf("Case-insensitive comparison: %d\n", icmp);

    // Demonstrate strrev()
    my_strrev(str1);
    printf("str1 after strrev(): \"%s\"\n", str1);

    // Demonstrate strchr()
    result = my_strchr("Hello, World!", 'W');
    if (result) {
        printf("Character 'W' found at position: %ld\n", result - "Hello, World!");
    } else {
        printf("Character 'W' not found.\n");
    }

    // Demonstrate strstr()
    result = my_strstr("Hello, World!", "World");
    if (result) {
        printf("Substring \"World\" found at position: %ld\n", result - "Hello, World!");
    } else {
        printf("Substring \"World\" not found.\n");
    }

    return 0;
}

