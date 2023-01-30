#include<stdio.h>
int main(){
    int start,stop;
    printf("Enter starting number: ");
    scanf("%d",&start);
    printf("Enter stopping number: ");
    scanf("%d",&stop);
    for(int i=start;i<=stop;i++){
        if((i>0)&&(stop%i!=0)){
            printf("%d \n",i);
        }
    }
    return 0;
}