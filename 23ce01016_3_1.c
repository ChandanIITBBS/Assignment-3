#include<stdio.h>
int main (){
int n;
    printf("Enter an integer:- ");
    scanf("%d",&n);
    if (n>0)
    printf("%d is a positive integer.",n);
    
    else if (n==0)
    printf("%d is zero integer.",n);
    
    else
    printf("%d is a negative integer.",n);
    
    return 0;
    }