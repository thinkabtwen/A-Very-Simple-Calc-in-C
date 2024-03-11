#include<stdio.h>

void addFunction(int a, int b){
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    int result = a + b;
    printf("Result: %d\n", result);
}

void subFunction(int a, int b){
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    int result = a - b;
    printf("Result: %d\n", result);
}

void mulFunction(int a, int b){
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    int result = a * b;
    printf("Result: %d\n", result);
}

void divFunction(int a, int b){
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    int result = a / b;
    printf("Result: %d\n", result);
}

int main(){
    int angka1, angka2, choice;

    do
    {
        printf("\nSmart Calculator\n");
        printf("================\n");
        printf("1. Addition Function\n");
        printf("2. Subtraction Function\n");
        printf("3. Multiplication Function\n");
        printf("4. Division Function\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addFunction(angka1, angka2);
            continue;
        case 2:
            subFunction(angka1, angka2);
            continue;
        case 3:
            mulFunction(angka1, angka2);
            continue;
        case 4:
            divFunction(angka1, angka2);
            continue;
        case 5:
            printf("Exiting program...\n");
            break;
        }
    } while (choice <= 4);
    
    return 0;
}