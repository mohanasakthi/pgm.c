#include<stdio.h>
void main()
{
int n,m,n1,temp=0,c,i;
printf("enter thnumber");
scanf("%d%d",&n,&m);
for(i=n;i<m;i++)
{
    c=n;
while(n>0)
{
n1=n%10;
temp=temp+(n1*n1*n1);
n=n/10;
}


if(temp==c)
{
printf(" arm number");
}
else
{
printf(" not armstrong");
}
}
}
