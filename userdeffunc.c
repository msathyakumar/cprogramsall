#include <stdio.h>
#include<conio.h>
int max(int x,int y);
void main()
{
    int a=9,b=16;
    int c;
    c = max(a,b);
    printf("the greatest number is %d",c);
    
    getch();
}
int max(int x,int y){
    int great;
    if (x>y){
        great = x;
    
    }
    else
    great = y;
    
    return (great);
}
