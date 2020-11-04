#include <stdio.h>
#include<conio.h>
void main()
{
    int i,num,rev,orn=0;
    scanf("%d",&num);
    while (num>0)
        {
            rev = num%10;
            orn = orn*10+rev;
            num = num/10;
            
        }
        printf("%d",orn);
    getch();
}
/* reverse of a digit
output:
12345
54321*\