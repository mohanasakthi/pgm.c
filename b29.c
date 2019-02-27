#include <stdio.h>
int main(void) {
	int min;
	int h,m;
	scanf("%d",&min);
	h=min/60;
	m=min%60;
	printf("the hour is %d\n",h);
	if(min%60==0)
	{
	printf(" minutes is 0" );
	}
	else
	printf(" minutes is %d",m);
	return 0;
}
