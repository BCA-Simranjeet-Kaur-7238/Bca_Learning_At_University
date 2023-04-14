//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    char cont;

    do {
        printf("\n");
        printf("BASIC CALCULATOR \n\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nENTER TWO NUMBERS TO ADD: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.3f\n", result);
                break;
            case 2:
                printf("\nENTER TWO NUMBERS TO SUBTRACT: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.3f\n", result);
                break;
            case 3:
                printf("\nENTER TWO NUMBERS TO MULTIPLY: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.3f\n", result);
                break;
            case 4:
                printf("\nENTER TWO NUMBERS TO DIVIDE: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.3f\n", result);
                }
                break;
            case 5:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue? (y/n) ");
        scanf(" %c", &cont);

    } 
    while (cont == 'y' || cont == 'Y');

    printf("\nExit\n");
    return 0;
}
