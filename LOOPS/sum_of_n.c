/* Write a C program to print sum of n natural numbers. */

#include <stdio.h>
#include <math.h>

int main(){
    
    int a, n ,sum;
    sum=0;
   
    printf("Enter n: ");
    scanf("%d",&n);
    
    for(a=1; a<n+1 ;a++){
        
        sum+=a;
         
    }
    printf("%d",sum);
    return 0;
}
