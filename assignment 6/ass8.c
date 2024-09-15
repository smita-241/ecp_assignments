#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100

// Helper function to convert a number less than 1000 into words
void convertLessThanThousand(int num, char* result) {
    const char* below20[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", 
                              "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
                              "Seventeen", "Eighteen", "Nineteen" };
    const char* tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
    const char* thousands[] = { "", "Thousand", "Million", "Billion" };

    if (num == 0) {
        strcpy(result, "Zero");
        return;
    }

    char buffer[MAX_WORDS] = "";
    int hundred = num / 100;
    int remainder = num % 100;

    if (hundred) {
        sprintf(buffer, "%s Hundred", below20[hundred]);
    }

    if (remainder < 20) {
        if (hundred) {
            sprintf(result, "%s %s", buffer, below20[remainder]);
        } else {
            strcpy(result, below20[remainder]);
        }
    } else {
        int ten = remainder / 10;
        int unit = remainder % 10;
        if (hundred) {
            sprintf(result, "%s %s %s", buffer, tens[ten], below20[unit]);
        } else {
            sprintf(result, "%s %s", tens[ten], below20[unit]);
        }
    }
}

// Function to convert number to words
void numberToWords(int num, char* result) {
    if (num == 0) {
        strcpy(result, "Zero");
        return;
    }

    const char* thousands[] = { "", "Thousand", "Million", "Billion" };
    char buffer[MAX_WORDS] = "";
    int i = 0;

    if (num < 0) {
        strcpy(result, "Negative ");
        num = -num;
    }

    for (i = 0; num > 0; i++) {
        if (num % 1000 != 0) {
            char temp[MAX_WORDS];
            convertLessThanThousand(num % 1000, temp);
            if (i > 0) {
                sprintf(buffer, "%s %s %s", temp, thousands[i], buffer);
            } else {
                sprintf(buffer, "%s %s", temp, thousands[i]);
            }
        }
        num /= 1000;
    }

    strcpy(result, buffer);
}

int main() {
    int number = 123456789;
    char words[MAX_WORDS];

    numberToWords(number, words);
    printf("Number: %d\nIn Words: %s\n", number, words);

    return 0;
}

