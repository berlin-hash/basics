#include<stdio.h>
struct num
{
    int a;
    int b;
};

typedef struct num N;
void main()
{
    N n1;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1.a,&n1.b);
    printf("The result is: %d",n1.a+n1.b);
}