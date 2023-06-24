/*program for adding two numbers */

#include <stdio.h>

int main() {
    
    int num_1 , num_2 ;
    
    printf("Enter the first number: ");
    scanf("%d",&num_1);
    
    printf("Enter the second number: ");
    scanf("%d",&num_2);
    
   
    printf("Average of the numbers is  %d",(num_1 + num_2)/2 );
    
    return 0;
}