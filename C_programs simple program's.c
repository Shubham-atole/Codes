#include <stdio.h>

int main() {
    int choice;
    printf("Choose a program (1-10):\n");
    printf("1. Hello World\\n");
    printf("2. Print Your Name\\n");
    printf("3. Addition of Two Numbers\\n");
    printf("4. Subtraction\\n");
    printf("5. Multiplication\\n");
    printf("6. Division\\n");
    printf("7. Remainder\\n");
    printf("8. Swap Two Numbers\\n");
    printf("9. Square of Number\\n");
    printf("10. Cube of Number\\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Hello, World!\n");
            break;
        case 2:
            printf("My name is Shubham\n");
            break;
        case 3:
            int a,b; scanf("%d%d", &a, &b); printf("Sum = %d\n", a+b);
            break;
        case 4:
            int a,b; scanf("%d%d", &a, &b); printf("Difference = %d\n", a-b);
            break;
        case 5:
            int a,b; scanf("%d%d", &a, &b); printf("Product = %d\n", a*b);
            break;
        case 6:
            int a,b; scanf("%d%d", &a, &b); printf("Quotient = %d\n", a/b);
            break;
        case 7:
            int a,b; scanf("%d%d", &a, &b); printf("Remainder = %d\n", a%b);
            break;
        case 8:
            int a,b,temp; scanf("%d%d", &a, &b); temp=a; a=b; b=temp; printf("a=%d b=%d\n", a,b);
            break;
        case 9:
            int n; scanf("%d", &n); printf("Square = %d\n", n*n);
            break;
        case 10:
            int n; scanf("%d", &n); printf("Cube = %d\n", n*n*n);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
