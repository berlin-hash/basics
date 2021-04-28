#include <stdio.h>
void main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n%2==0){
        printf("2 ");
        n=n/2;
    }

    for(int i=3;i<=n;i=i+2){
        while(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
    }
}