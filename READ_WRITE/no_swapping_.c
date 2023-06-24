/*Two numbers are input through the keyboard into two locations C and D. Write a 
C- program to interchange the contents of C and D.*/
#include <stdio.h>

int main()
{
    int c,d;
    
    
    printf("Enter first number (c): ");
    scanf("%d",&c);
    
    printf("Enter second number (d): ");
    scanf("%d",&d);
    
    c=c-d;
    d=c+d;
    c=d-c;
    
    printf("Swapped numbers are : %d %d",c,d);
    
    return 0;
}
