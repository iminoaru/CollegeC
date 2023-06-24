/* Write a C program to print the sum of the square of n natural numbers. The sum of 
squares of first 'n' natural no`s1^2+2^2+3^2+.....+n^2=n*(n+1)*(2n+1)/6 */

#include <stdio.h>

int main(){
    
    int a,n;
    
    printf("enter n: ");
    scanf("%d",&n);
    
    a= n*(n+1)*((2*n)+1)/6;
    
    printf("sum is %d",a);
    return 0;
}