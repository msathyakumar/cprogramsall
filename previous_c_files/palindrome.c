#include <stdio.h>
#include<conio.h>
void main()
{
    int num,old,ini,rem,rev=0;
    scanf("%d",&num);
    ini = num;
    while (num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    if (ini==rev)
    {
        printf("given number is palindrome");
    }
    else{
        printf("given number is not a palindrome");
    }
    getch();
}
/*
121                                                                                                                                           
given number is palindrome */

