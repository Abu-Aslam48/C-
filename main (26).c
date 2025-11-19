#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float length, width, radius, base, height, side1, side2, side3;
    float area, perimeter;
    
    printf("=== AREA & PERIMETER CALCULATOR ===\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("Enter your choice %d\n: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: // Rectangle
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            perimeter = 2 * (length + width);
            printf("Rectangle Area: %.2f\n", area);
            printf("Rectangle Perimeter: %.2f\n", perimeter);
            break;
            
        case 2: // Circle
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.1416 * radius * radius;
            perimeter = 2 * 3.14159 * radius;
            printf("Circle Area: %.2f\n", area);
            printf("Circle Circumference: %.2f\n", perimeter);
            break;
            
        case 3: // Triangle
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Enter three sides: ");
            scanf("%f %f %f", &side1, &side2, &side3);
            perimeter = side1 + side2 + side3;
            printf("Triangle Area: %.2f\n", area);
            printf("Triangle Perimeter: %.2f\n", perimeter);
            break;
            
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}