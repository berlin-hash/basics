#include <stdio.h>
int check_p(int n){
    int flag=0;
    for(int i=0;i<=n/2;i++){
        flag=(n==(i*(i+1)))?1:0;
        if(flag==1)
            return 1;
    }
    return 0;
}
void main(){
    int num;
    printf("Enter a number to check if pronic: ");
    scanf("%d",&num);
    int status=check_p(num);
    if(status==1)
        printf("pronic");
    else
        printf("not pronic");
}
