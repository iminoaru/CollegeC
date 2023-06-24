/*This is a program for finding number of digits in a number*/

#include <stdio.h>

int main(){
   
    int number,i=0;
   
    printf("enter the number: ");
    scanf("%d",&number);
    
    while(number>0){
        
        number=number/10;
        i=i+1;
    }
        printf("%d",i);
    
    return 0;

    
}