/* Consider a number is input through keyboard. If number is between 0 to 10 then square the 
number. If number is between 11 to 20 then cube the number and for all other conditions number 
will be as it is. WAP for the same. Without using if statement*/

#include <stdio.h>

int main()
{ 
    
    int n ;
  
   
    printf("enter the number:");
    scanf("%d",&n);
    
    
    
    switch(n){
    
    case 1 ... 10:
           printf("%d",n*n);
           break;
    
    case 11 ... 20:
           printf("%d",n*n*n);
           break;
    
    default:
           printf("%d",n);
           break;
            
}

    
    return 0;
}