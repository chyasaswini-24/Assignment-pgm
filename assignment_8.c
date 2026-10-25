#include <stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    if (scanf("%f", &weight) != 1) 
    {
        printf("Invalid input.\n");
    }
    printf("Enter height in meters: ");
    if (scanf("%f", &height) != 1 || height <= 0) 
    {
        printf("Invalid height.\n");
    }
    bmi = weight / (height * height);
    printf("\nBMI Value: %.2f\n", bmi);
    printf("Category: ");
    if (bmi < 18.5) 
    {
        printf("Underweight\n");
    } else if (bmi < 25.0) {
        printf("Normal\n");
    } else if (bmi < 30.0) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
}