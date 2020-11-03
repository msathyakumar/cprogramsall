#include<stdio.h>
#include<conio.h>

int main()
{
    int liters,km;
    float out;
    printf("enter liters and km:");
    scanf("%d %d",&liters,&km);
    out = liters*100/km;
    printf("%f",out);
    getch();
}
