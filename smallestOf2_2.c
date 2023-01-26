#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("Number is: %d",num2);
    }
    else{
        printf("Number is: %d",num1);
    }
    return 0;
}