#include <stdio.h>
void maxNum (int a,int b, int *max);
int main(){
    int a,b;
    int max;
    
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    maxNum(a,b, &max);
    printf("Max number is: %d ",max);
    return 0;
}
void maxNum(int a,int b, int *max){
    
    if(a>b){
        *max = a;
    }
    else{
        *max = b;
    }
}