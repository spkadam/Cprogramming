#include <stdio.h>
int main()
{
    char mychar;
    printf("Enter the character: ");
    scanf("%c",&mychar);
    if(mychar=='0'|| mychar == '1'||mychar == '2'|| mychar == '3'||mychar == '4'|| mychar == '5'||mychar == '6'|| mychar == '7'||mychar == '8'|| mychar == '9'){
        printf("Character is a digit!");
    }
    else{
        printf("Character is not a digit");
    }
    return 0;
}