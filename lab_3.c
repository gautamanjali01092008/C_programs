#include <stdio.h>

int main() {
    int choice;

    printf("--- Task 3: Loops and Patterns ---\n");
    printf("1. Multiplication Table\n");
    printf("2. Calculate Factorial\n");
    printf("3. Print Star Pattern\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            int num;
            printf("Enter a number for its table: ");
            scanf("%d", &num);
            
            printf("\nMultiplication Table of %d:\n", num);
            // Iterative structure (Single Loop)
            for(int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num * i);
            }
            break;
        }
        
        case 2: {
            int num, fact = 1;
            printf("Enter a number to find factorial: ");
            scanf("%d", &num);
            
            // Iterative structure (Single Loop)
            for(int i = 1; i <= num; i++) {
                fact = fact * i; // Har number ko pichle result se multiply karta hai
            }
            printf("Factorial of %d is: %d\n", num, fact);
            break;
        }
        
        case 3: {
            int rows;
            printf("Enter number of rows for star pattern: ");
            scanf("%d", &rows);
            
            printf("\nStar Pattern:\n");
            // Nested control structure (Loop ke andar loop)
            for(int i = 1; i <= rows; i++) {           // Outer loop (Rows ke liye)
                for(int j = 1; j <= i; j++) {          // Inner loop (Stars print karne ke liye)
                    printf("* ");
                }
                printf("\n"); // Ek row print hone ke baad new line mein aane ke liye
            }
            break;
        }
        
        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}