#include<stdio.h>
#include <stdlib.h>
void main()
{
    int*p=(int*)malloc(sizeof(int));
    int*q=(int*)malloc(sizeof(int));
    printf("Enter two numbers: ");
    scanf("%d%d",p,q);
    printf("The result is: %d",*p+*q);

}