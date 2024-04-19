#include <stdio.h>


int main() {
    char operator, choice;
    float num1, num2, result;

    do {
        printf("Welcome to my basic Calculator using C\n");
        
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        
        printf(" + for addition\n");
        printf(" - for subtraction\n");
        printf(" * for multplication\n");
        printf(" / for division\n");
        printf("Enter an operator option: ");
        scanf(" %c", &operator);

        switch(operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if(num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error! Division by zero.\n");
                    break;
                }
                break;
            default:
                printf("Error! Invalid operator.\n");
                break;
        }

        printf("Result: %.2f\n", result);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    
    return 0;
}
