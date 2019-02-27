#include <stdio.h>
int main()
{
	int a[5],i,b;
	printf(" array value");
	for(i=0;i<=5;i++)
	{
		scanf("%d",a[i]);
	}
	b=a[0];
	for(i=0;i<=5;i++)
	{
		if(b>a[i])
		{
			b=b;
		}
		else
		{
			b=a[i];
		}
	}
	printf("max%d",b);
}
