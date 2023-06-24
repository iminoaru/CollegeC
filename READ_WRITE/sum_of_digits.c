/* Write program that takes 3 digit number as an input. Program should compute and
display the sum of digits in a number. */


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
    
    printf("the sum of digits is %d",d1+d2+d3);
        
    return 0;    
}
