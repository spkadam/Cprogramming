#include<stdio.h>
void Temp (float temp);
int main(){
    float temp;
    printf("Enter temperature: ");
    scanf("%f",&temp);
    Temp(temp);
    return 0;
}

void Temp(float temp){
    if(temp>0){
        printf("HOT");
    }
    else{
        printf("COLD");
    }
}