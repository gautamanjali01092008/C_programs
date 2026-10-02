#include <stdio.h>

// Arithmetic functions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

// Factorial function
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

// Prime checking function
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// Maximum of three numbers
int maximum(int a, int b, int c)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    return max;
}

// Swapping function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int choice;
    int a, b, c, n;

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Prime Checking\n");
        printf("7. Maximum of Three Numbers\n");
        printf("8. Swap Two Numbers\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Addition = %d\n", add(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Subtraction = %d\n", subtract(a, b));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Multiplication = %d\n", multiply(a, b));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                if (b == 0)
                {
                    printf("Cannot divide by zero!\n");
                }
                else
                {
                    printf("Division = %.2f\n", divide(a, b));
                }
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (n < 0)
                {
                    printf("Factorial is not possible for negative numbers.\n");
                }
                else
                {
                    printf("Factorial = %d\n", factorial(n));
                }
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (isPrime(n))
                {
                    printf("%d is a Prime Number.\n", n);
                }
                else
                {
                    printf("%d is not a Prime Number.\n", n);
                }
                break;

            case 7:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);

                printf("Maximum = %d\n", maximum(a, b, c));
                break;

            case 8:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Before swapping: a = %d, b = %d\n", a, b);

                swap(&a, &b);

                printf("After swapping: a = %d, b = %d\n", a, b);
                break;

            case 9:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}