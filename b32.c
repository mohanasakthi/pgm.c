#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int c=0,j;
    scanf("%[^\n]s", s);
    for (i = 0;s[j] != '\0';j++)
    {
        if (s[j] == ' ')
            c++;    
    }
    printf("%d\n", c + 1);
}
