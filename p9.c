#include <stdio.h>
void main(){
    int a;
    int st[10];
    int top=-1;
    printf("Enter a number: ");
    scanf("%d",&a);
    int x;
    while(a>0){
        x=a%10;
        st[++top]=x;
        a=a/10;
    }
    while(top!=-1)
        printf("%d ",st[top--]);
}