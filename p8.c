#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int x;
    while(a>0)
    {
        x=a%10;
        printf("%d ",x);
        a=a/10;
    }
}