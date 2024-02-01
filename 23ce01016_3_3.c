#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st side: ");
    scanf("%d",&a);
    printf("Enter 2nd side: ");
    scanf("%d",&b);
    printf("Enter 3rd side: ");
    scanf("%d",&c);
    if (a+b>c)
    printf("Yes, these are the sides of a triangle.");
    else if (b+c>a)
    printf("Yes, these are the sides of a triangle.");
    else if (c+a>b)
    printf("Yes, these are the sides of a triangle.");
    else
    printf("No, these are not the sides of a triangle.");

    return 0;
}