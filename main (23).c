#include <stdio.h>

// Function to calculate grade
int calculateGrade(int marks) {
    if(marks >= 90) {
        return 'A';
    } else if(marks >= 80) {
        return 'B';
    } else if(marks >= 70) {
        return 'C';
    } else if(marks >= 60) {
        return 'D';
    } else if(marks >= 50) {
        return 'E';
    } else {
        return 'F';
    }
}

int main() {
    int marks;
    
    printf("Enter student marks (0-100): ");
    scanf("%d", &marks);
    
    // Call the function
    char grade = calculateGrade(marks);
    
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);
    
    return 0;
}