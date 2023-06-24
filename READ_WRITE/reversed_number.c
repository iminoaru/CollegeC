/* If a three-digit number is input through the keyboard. Write a C program to reverse 
the number. */


#include<stdio.h>
int main(){
     
    int n,d1,d2,d3 ;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    
    printf("the reversed number is %d",d1*100+d2*10+d3);
        
    return 0;    
}
