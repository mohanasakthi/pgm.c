#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

      if(number % 2 == 0)
        printf("is even");
    else
        printf(" is odd");
    return 0;
}
