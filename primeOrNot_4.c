#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num>0){
        if((num%1==0) && (num%num==0) && (num%2!=0)){
            printf("Number is prime!");
        }
        else{
            printf("Not prime.");
        }
    }

    return 0;
}