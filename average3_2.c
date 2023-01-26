#include <stdio.h>
int main()
{
    float num1, num2, num3;
    printf("Enter 3 numbers:");
    printf("Enter 1st number: ");
    scanf("%f",&num1);
    printf("Enter 2nd number: ");
    scanf("%f",&num2);
    printf("Enter 3rd number: ");
    scanf("%f",&num3);
    float avg;
    avg = (num1 +num2 +num3)/3.0;
    printf("Average is:%f ",avg);
    return 0;
}