#include <stdio.h>
#include<conio.h>
void main() 
{
    int i,j,num,flag=0;
    int prime =0;
    printf("enter the value of num");
    scanf("%d",&num);
    for (i=2,i<num;i++){
        flag =0;
    for(j=2;j<i;j++){
        if (num%j==0){
            flag+=1;
        }
        }
    if (flag==0){
        printf("%d",i);
    }
        
    }

    getch();
}
