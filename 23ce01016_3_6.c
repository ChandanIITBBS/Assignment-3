#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    long long square = (long long)num * num;
    int numDigits = 0;
    
    long long temp = square;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    int rightDigits = numDigits / 2;
    long long divisor = pow(10, rightDigits);
    long long part1 = square / divisor;
    long long part2 = square % divisor;

    if (part1 + part2 == num) {
        printf("%d is a Kaprekar Number\n", num);
    }
    else {
        printf("%d is not a Kaprekar Number\n", num);
    }

    printf("%d",square);
    return 0;
}