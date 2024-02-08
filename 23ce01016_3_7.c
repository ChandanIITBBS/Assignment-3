#include <stdio.h>

int main() {
    int mo,ca,tc;

    printf("Enter marks obtained between 0 to 100: ");
    scanf("%d", &mo);

    printf("Enter number of classes attended: ");
    scanf("%d", &ca);

    printf("Enter total number of classes: ");
    scanf("%d", &tc);

    float aw = (float)ca / tc;
    float fs = mo * aw;

    char grade;
    if (fs >= 90) {
        grade = 'E';
    } else if (fs >= 80) {
        grade = 'A';
    } else if (fs >= 70) {
        grade = 'B';
    } else if (fs >= 60) {
        grade = 'C';
    } else if (fs >= 50) {
        grade = 'D';
    } else if (fs >= 40) {
        grade = 'P';
    } else {
        grade = 'F';
    }

    printf("Final Score= %.2f\n", fs);
    printf("Grade is =  %c\n", grade);


    return 0;
}