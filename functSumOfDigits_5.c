#include<stdio.h>
int sum(int n);
int main(){
    int n = 1111111;
    printf("%d",sum(n));

    return 0;
}
int sum(int n){
    int s = 0;
    while(n>0){
        int temp = n%10;
        s  = s+temp;
        n=n/10;
    }

    return s;

}