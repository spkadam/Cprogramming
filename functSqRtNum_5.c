#include<stdio.h>
#include<math.h>
float sqRoot(float n);
int main(){
    float n;
    printf("Enter number: ");
    scanf("%f",&n);
    printf("SqRoot of %f is %f",n,sqRoot(n));
    return 0;
}

float sqRoot(float n){
    float sqrt;
    sqrt = pow(n,0.5);
    return sqrt;
}