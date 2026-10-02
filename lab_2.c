#include <stdio.h>

int main() {
    int choice;

    // Main Menu
    printf("1. Check Positive/Negative/Zero & Even/Odd\n");
    printf("2. Find Largest of 3 Numbers\n");
    printf("3. Simple Calculator\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            
            // Checking Pos/Neg/Zero
            if(num > 0) printf("Number is Positive\n");
            else if(num < 0) printf("Number is Negative\n");
            else printf("Number is Zero\n");

            // Checking Even/Odd
            if(num % 2 == 0) printf("Number is Even\n");
            else printf("Number is Odd\n");
            break;
        }
        
        case 2: {
            int n1, n2, n3;
            printf("Enter 3 numbers (space separated): ");
            scanf("%d %d %d", &n1, &n2, &n3);
            
            if(n1 >= n2 && n1 >= n3) printf("%d is the largest\n", n1);
            else if(n2 >= n1 && n2 >= n3) printf("%d is the largest\n", n2);
            else printf("%d is the largest\n", n3);
            break;
        }
        
        case 3: {
            int op, a, b;
            
            // Calculator Menu
            printf("\n1 for Add, 2 for Subtract, 3 for Multiply, 4 for Divide\n");
            printf("Enter choice (1-4): ");
            scanf("%d", &op);
            
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            
            switch(op) {
                case 1: printf("Answer = %d\n", a + b); break;
                case 2: printf("Answer = %d\n", a - b); break;
                case 3: printf("Answer = %d\n", a * b); break;
                case 4: printf("Answer = %d\n", a / b); break;
                default: printf("Wrong calculator choice\n");
            }
            break;
        }
        
        default:
            printf("Invalid Main Menu Choice\n");
    }

    return 0;
}