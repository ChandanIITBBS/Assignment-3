#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter x1: ");
    scanf("%d",&x1);
    printf("Enter y1: ");
    scanf("%d",&y1);
    printf("Enter x2: ");
    scanf("%d",&x2);
    printf("Enter y2: ");
    scanf("%d",&y2);
    printf("Enter x3: ");
    scanf("%d",&x3);
    printf("Enter y3: ");
    scanf("%d",&y3);
    if ((x2-x1)/(y2-y1)==(x3-x2)/(y3-y2))
    printf("Yes, all the three points lie on a straight line.");
    else
    printf("No, all the three points does not lie on a straight line.");

    return 0;
}