/* Write a program to check whether a triangle is valid or not, when the three angles of 
the triangle are entered through the keyboard. */
#include <stdio.h>

int main(){
    
    int  angle_1 , angle_2 , angle_3 ;
    
    printf("Enter first angle : ");
    scanf("%d",&angle_1);
    printf("Enter second angle : ");
    scanf("%d",&angle_2);
    printf("Enter third angle : ");
    scanf("%d",&angle_3);
    
     if (angle_1+angle_2+angle_3==180) {
      printf("It is a Triangle");
   }
  
   else {
      printf("It is not a Triangle");
   }

   return 0;
}
