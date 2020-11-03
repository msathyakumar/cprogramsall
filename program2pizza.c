#include<stdio.h>
#include<conio.h>
void main(){
    int pizza=0,puffs=0,cooldrk=0;
    float tp;
    printf("\n enter the no.of pizzas");
    scanf("%d",&pizza);
    printf("\n enter the no.of puffs");
    scanf("%d",&puffs);
    printf("\n enter the no.of cooldrk");
    scanf("%d",&cooldrk);
    tp = pizza*100+puffs*20+cooldrk*10;
    printf("total price is %f",tp);
    getch();
    
    
}
