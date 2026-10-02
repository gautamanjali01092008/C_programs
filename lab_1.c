#include <stdio.h>

int main() {
    // Part 1: Rectangle Area (Arithmetic Operators)
    int length, width, area;
    
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    
    printf("Enter width of rectangle: ");
    scanf("%d", &width);
    
    area = length * width;
    printf("Area of Rectangle = %d\n\n", area);

    // Part 2: Swapping Two Numbers (Variables Logic)
    int a, b, temp;
    
    printf("Enter first number (A): ");
    scanf("%d", &a);
    
    printf("Enter second number (B): ");
    scanf("%d", &b);
    
    // Swapping process
    temp = a;
    a = b;
    b = temp;
    
    printf("After Swapping -> A = %d, B = %d\n", a, b);

    return 0;
}
//