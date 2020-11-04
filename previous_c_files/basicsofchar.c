#include <stdio.h>
#include<conio.h>
void main()
{
    char s;
    s = getchar();
    if(isalpha(s)>0){
        printf("given char is alpha");
    }
    else{
        printf("given string is not alpha\n");
    }
    printf("%c",s);
    putchar(s);
    getch();
}
