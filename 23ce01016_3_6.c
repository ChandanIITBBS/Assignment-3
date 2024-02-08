#include<stdio.h>
#include<math.h>
int isKaprekar(int a);

int main (){
int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(isKaprekar(n)){
        printf("Yes, %d is a kaprekar number.",n);
    }
    else {
        printf("%d is not a kaprekar number.",n);
    }
    return 0;
    }
    
    
int isKaprekar(int a){
int square = a*a;
int temp1 = square;
int length=0;
while (temp1 > 0){
    length++;
    temp1/=10;
    }
    
for (int i = 1; i<length; i++){
    int part1=square/(int)(pow(10,i)+0.1);
    int part2=square%(int)(pow(10,i)+0.1);

    if (part1+part2==a){
        printf("If part1 is %d and part2 is %d then, %d is a kaprekar number.\n",part1,part2,a);
        return 1;
        break;
        }
    }     
return 0;
}