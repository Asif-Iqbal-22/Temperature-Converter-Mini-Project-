#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    while(1) {
        printf("\n=== Temperature Converter ===\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Celsius to Kelvin\n");
        printf("3. Fahrenheit to Celsius\n");
        printf("4. Fahrenheit to Kelvin\n");
        printf("5. Kelvin to Celsius\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 7) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter temperature: ");
        scanf("%f", &temp);

        switch(choice) {
            case 1: converted = (temp * 9/5) + 32; printf("Result: %.2f F\n", converted); break;
            case 2: converted = temp + 273.15; printf("Result: %.2f K\n", converted); break;
            case 3: converted = (temp - 32) * 5/9; printf("Result: %.2f C\n", converted); break;
            case 4: converted = (temp - 32) * 5/9 + 273.15; printf("Result: %.2f K\n", converted); break;
            case 5: converted = temp - 273.15; printf("Result: %.2f C\n", converted); break;
            case 6: converted = (temp - 273.15) * 9/5 + 32; printf("Result: %.2f F\n", converted); break;
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
