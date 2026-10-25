#include <stdio.h>

int main() {
    int mark;
    printf("Enter the mark (0-100): ");
    scanf("%d", &mark);
    if (mark < 0 || mark > 100) {
        printf("Invalid mark\n");
    } else if (mark >= 90 && mark <= 100) {
        printf("O grade\n");
    } else if (mark >= 80 && mark <= 89) {
        printf("A+ grade\n");
    } else if (mark >= 70 && mark <= 79) {
        printf("A grade\n");
    } else if (mark >= 60 && mark <= 69) {
        printf("B grade\n");
    } else if (mark >= 50 && mark <= 59) {
        printf("C grade \n");
    } else {
        printf("Fail\n");
    }
}