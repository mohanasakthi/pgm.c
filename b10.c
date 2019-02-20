 #include<stdio.h>
 int main()
 {
 int a,m,i=1;
 scanf("%d",&a);
 m=a;
 while(a!=0)
 {
  a=a/10;
  if(a!=0)
  i++;
 }
 printf("%d",i);
 }
