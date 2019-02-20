#include<stdio.h>
void main()
{
int a,b,n;
printf("enter the  limits");
scanf("%d%d",&a,&b);
for(n=a;n<b;n++)
{
if(n%2==0)
{
printf("%d",n);
}
}
}
