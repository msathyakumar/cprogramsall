#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,num,prime=0;
    printf("enter the value of num");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if (num%i==0){
        prime = 1;
        break;
        }
        }
    if (prime==0){
        printf("given number is prime");
    }
    else{
        printf("given number is not prime");
    }

    getch();
}
/*
enter the value of num23                                                                                                                      
given number is prime
*/