#include <stdio.h>
#include<conio.h>
void main()
{
    int num,rem,old=0;
    printf("enter the num:");
    scanf("%d",&num);
    while (num>0){
        rem = num%10;
        old = old+rem;
        num = num/10;
    }
printf("%d",old);
getch();
}
