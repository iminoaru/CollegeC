/* The length & breadth of a rectangle and radius of a circle are input through the
keyboard. Write a C program to calculate the area & perimeter of the rectangle,
and the area & circumference of the circle. */


#include<stdio.h>
int main(){
     
    int length , breadth , radius , area , perimeter ;
    float circumference, areac;
    
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&breadth);
    
    area = length * breadth;
    perimeter = 2 *(length + breadth);
   
    printf("\narea of rectangle is %d \nperimeter of rectangle is %d\n\n",area,perimeter);
   
    printf("Enter the radius of circle: ");
    scanf("%d",&radius);
    
    areac = 3.141 * radius * radius;
    circumference = 2 * 3.141 * radius;
    
    printf("area of circle is %f \n circumference of rectangle is %f",areac,circumference);
        
    return 0;    
}
