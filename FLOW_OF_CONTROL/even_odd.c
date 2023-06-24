/* . Any integer is input through the keyboard. Write a program to find out whether it is an
odd number or even number */
#include <stdio.h>

int main(){
    
    int number;
    
    printf("Enter the number: ");
    scanf("%d",&number);
    
    if(number%2==0){
        printf("%d is Even",number);
    }
    else{
        printf("%d is Odd",number);
    }
    return 0;
}
