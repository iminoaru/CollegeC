/* Consider an integer is input through keyboard. If character is 1 then perform addition 
of two numbers, if 2 then perform subtraction of two numbers and for all others perform 
multiplication of two numbers. WAP for the same. */

#include<stdio.h>

int main(){
        int a,b,c;
        
    printf("enter number: ");
    scanf("%d",&a);
    
    printf("enter number 1: ");
    scanf("%d",&b);
    
    printf("enter number 2: ");
    scanf("%d",&c);
    

switch(a){
    
    case 1:
            printf("%d",b+c);
            break;
    
    case 2:
            printf("%d",b-c);
            break;   
    
    default:
            printf("%d",b*c);
            break;
}
    
    return 0;
}

