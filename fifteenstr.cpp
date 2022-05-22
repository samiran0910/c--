
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a+1;
    c=a|b;
    while(c!=a+b)
    {
        b++;
        c=a|b;
    }
    printf("%d",b);
    return 0;
}