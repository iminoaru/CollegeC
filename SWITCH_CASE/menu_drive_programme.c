/* Write a menu driven program using (switch-case) which has following options:
1) Area of a Circle.
2) Perimeter of a Circle
3) Area of a Square
4) Perimeter of a Square
5) Area of a tringle
6) Perimeter of a triangle
7) Exit */

#include<stdio.h>

int main(){
    
    int choice;
    int length , radius , base , height , sides ;
    float area_square , area_circle , area_triangle ;
    float perimeter_square , perimeter_circle , perimeter_triangle ;
        
    printf("enter number of choice:\n1) Area of a Circle.\n2) Perimeter of a Circle\n3) Area of a Square\n4) Perimeter of a Square\n5) Area of a tringle\n6) Perimeter of a triangle\n7) Exit  \nEnter choice: ");
    scanf("%d",&choice);
    

switch(choice){
    
    case 1:
            printf("Enter radius: ");
            scanf("%d",&radius);
            printf("Area of a Circle: %f",3.141*radius*radius);
            break;

    case 2:
            printf("Enter radius: ");
            scanf("%d",&radius);
            printf("Perimeter of a Circle: %f",3.141*2*radius);
            break;
          
    case 3:
            printf("Enter length: ");
            scanf("%d",&length);
            printf("Area of a Square: %f",length*length);
            break;
            
    case 4:
            printf("Enter length: ");
            scanf("%d",&length);
            printf("Perimeter of a Square: %f",6*length);
            break;
   
    case 5:
            printf("Enter base: ");
            scanf("%d",&base);
            printf("Enter height: ");
            scanf("%d",&height);
            printf("Area of a tringle: %f",0.5*base*height);
            break;
    
    case 6:
            printf("Enter side: ");
            scanf("%d",&sides);
            printf("Perimeter of a triangle: %f",3*sides);
            break;
    
    case 7:
            printf("EXITED");
            break; 
    default:
            printf("invalid");
            break;
}
    
    return 0;
}
