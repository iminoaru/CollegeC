/* Write a C program to print  n natural numbers. */

#include <stdio.h>
#include <math.h>

int main(){
    
    int a=1 , n ;
   
    printf("Enter n: ");
    scanf("%d",&n);
    
    for(a=1; a<n ;a++){
       
        printf("%d\n",a);  
    }
    
    
    printf("%d",a);
    return 0;
}
