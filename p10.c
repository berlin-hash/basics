#include <stdio.h>
void main(){
    int a;
    int even[5],odd[5];
    int top1=-1,top2=-1;
    printf("Enter a number: ");
    scanf("%d",&a);
    int x;
    while(a>0){
        x=a%10;
        if(x%2==0)
            even[++top1]=x;
        else    
            odd[++top2]=x;
        a=a/10;
    }

    printf("Odd digits: ");
    while(top2!=-1)
        printf("%d ",odd[top2--]);
    printf("\n");
    printf("Even digits: ");
    while(top1!=-1)
        printf("%d ",even[top1--]);
        
}