#include <stdio.h>
void main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    int st[15],top=-1;
    while(num>0){
        st[++top]=num%2;
        num=num/2;
    }
    while(top!=-1){
        printf("%d",st[top--]);
    }
}
