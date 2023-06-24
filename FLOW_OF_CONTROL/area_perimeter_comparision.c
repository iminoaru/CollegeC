/* Given the length and breadth of a rectangle, write a program to find whether the area 
of the rectangle is greater than its perimeter */
#include <stdio.h>

int main(){
    
    int  length , breadth , area , perimeter ;
    
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter breadth : ");
    scanf("%d",&breadth);
    
    area= length * breadth;
    perimeter= 2*(length + breadth);
    
    if (area > perimeter) {
      printf("Area is greater than perimeter");
   }
  
   else {
      printf("perimeter is greater than Area");
   }

   return 0;
}
