#include <stdio.h>
#include<conio.h>
void main()
{
    int num,rem,store,old=0;
    scanf("%d",&num);
    store = num;
    if (num>0){
    while (num>0)
    {
        rem = num%10;
        old = old+rem*rem*rem;
        num = num/10;
    }
    if (old== store){
        printf("given number is armstrong number");
    }
    else{
        printf("given number is not a armstrong number");
    }
    }
    else
    printf("please enter valid number");
    getch();
}
/*153                                                                                                                                           
given number is armstrong number*/

