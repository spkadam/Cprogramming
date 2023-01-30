#include<stdio.h>
int Pow(int n,int p);
int main(){
    int n,p;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&p);
    printf("Output is: %d",Pow(n,p));

    return 0;
}

int Pow(int n,int p){
    int product = 1;
    for(int i= 1; i<=p; i++){
        product = product *n;
    }
    return product;
}