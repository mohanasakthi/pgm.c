#include<stdio.h>
void main()
{
    char c;
    printf("enter the char:");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("is vowel");
    }
    else
    {
        printf("constand");
    }
    getch();
}
