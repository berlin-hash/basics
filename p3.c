#include<stdio.h>
int sum(int x,int y)
{
    return x+y;
}
void accept(int *x,int *y)
{
    printf("Enter two numbers:");
    scanf("%d%d",x,y);
}
void display(int x,int y)
{
    printf("The sum is %d",sum(x,y));
}

void main()
{
    int x,y;
    accept(&x,&y);
    display(x,y);
}