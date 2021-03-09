#include <stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("please enter the number:");
    scanf("%d",&num);
    
    if (num%2==0){
        printf("given number is even");
    }

    else
    printf("given number is odd");
    getch();
}
/*please enter the number:3                                                                                                                     
given number is odd */
