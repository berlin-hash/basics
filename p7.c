#include<stdio.h>
struct num
{
    int a;
    int b;
};

typedef struct num N;

void accept(int *p,int *q)
{
    printf("Enter two numbers: ");
    scanf("%d%d",p,q);
}
void result(int a,int b)
{
    printf("The result is: %d",a+b);
}
void main()
{
    N n1;
    accept(&n1.a,&n1.b);
    result(n1.a,n1.b);
}