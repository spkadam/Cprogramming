#include<stdio.h>
int main (){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Not a natural number!");
    }
    else{
        printf("Natural number");
    }
    return 0;
}