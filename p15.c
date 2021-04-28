#include <stdio.h>
void main(){
    int num;
    int flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=1){
        if(num==4 || num==16 || num==37 ){
            flag=1;
            break;
        }
        int sum=0;
        int x;
        while(num>0){
            x=num%10;
            sum=sum+(x*x);
            num=num/10;
        }
        num=sum;
    }

    if(flag==0)
        printf("Happy number ");
    else
        printf("UNhappy number");
}