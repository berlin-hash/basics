#include <stdio.h>
void main(){
    int num;
    printf("Enter range from 2 to n: ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        int flag=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",i);
    }
    
}