#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
printf(" alphabet");
else 
printf(" character");
}
