#include <stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int flag=0;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Prime number");
    else    
        printf("Not prime");
}
