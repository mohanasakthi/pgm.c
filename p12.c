#include<stdio.h>
int main()
{
	int m,rev=0,rem,y;
	scanf("%d",&m);
	y=m;
	while(m>0)
	{
		rem=m%10;
		rev=(rev*10)+rem;
		m=m/10;
	}
	if(y==rev)
	{
		printf("\nyes");
		}
		else
			printf("\nNo");
	return 0;
}
