#include<stdio.h>
#include <stdlib.h>

void accept(int *p,int *q)
{
    printf("Enter two numbers: ");
    scanf("%d%d",p,q);
}
void result(int *p,int *q)
{
        printf("The result is: %d",*p+*q);
}
void main()
{
    int*p=(int*)malloc(sizeof(int));
    int*q=(int*)malloc(sizeof(int));
    accept(p,q);
    result(p,q);
}