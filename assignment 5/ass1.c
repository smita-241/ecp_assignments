#include <stdio.h>

int main() {
    float marks[5], total = 0, average;
    
    // Loop to get input for each subject
    for(int i = 0; i < 5; i++) {
        printf("Enter the marks for subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i]; // Add each subject's mark to the total
    }
    
    // Calculate average
    average = total / 5;
    
    // Display total and average
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    
    return 0;
}

