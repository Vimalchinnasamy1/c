#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("a is greater");
    else if (b>a && b>c)
        printf("b is greater");
    else 
        printf("c igreater");
    return 0;
}
