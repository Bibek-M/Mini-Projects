#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Prompt the user to select an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Prompt the user to input two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the chosen operation
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
