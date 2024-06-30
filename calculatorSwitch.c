#include <stdio.h>

int main() {
    int a, b, ans, choices;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    printf("Enter your choice:\n");
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    scanf("%d", &choices);

    switch(choices) {
        case 1:
            ans = a + b;
            printf("The answer is: %d\n", ans);
            break;
        case 2:
            ans = a - b;
            printf("The answer is: %d\n", ans);
            break;
        case 3:
            ans = a * b;
            printf("The answer is: %d\n", ans);
            break;
        case 4:
            if (b != 0) {
                ans = a / b;
                printf("The answer is: %d\n", ans);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}


