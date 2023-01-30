#include<stdio.h>
int main(){
    printf("Enter number: ");
    int n;
    scanf("%d", &n);
    int r;
    int sum= 0;
    int temp = n;
    while(n>0){
        r=n%10;
        sum = sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp){
        printf("%d is an Armstrong number",temp);
    }
    else{
        printf("%d is not an Armstrong number",temp);
    }

    return 0;
}