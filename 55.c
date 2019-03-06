#include <stdio.h>

int main(void) {
	int n,m,prod;
	scanf("%d %d",&n,&m);
	prod=n*m;
	if(prod%2==0)
	{
		printf("evn");
	}
	else
	printf("odd");
	return 0;
}
