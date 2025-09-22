#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Say Hello\n");
    printf("2. Add two numbers\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Hello!\n");
            break;
        case 2: {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Sum = %d\n", a + b);
            break;
        }
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
