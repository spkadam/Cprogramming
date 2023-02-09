#include <stdio.h>
int main (){
    
    int arr[5]={3,5,7,9,11};
    int i;
    int *ptr;
    
    
    ptr = &arr[5-1];
    printf("Elements of an array in reverese order: \n");
    for(i= 0;i<5;i++){
        printf("%d\n",*ptr--);

    }


    return 0;
}