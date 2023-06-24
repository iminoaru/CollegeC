/*distance units convertor */

#include <stdio.h>

int main() {
    
    int distance , choice ;
    
    printf("Enter the distance ( in kilometer ): ");
    scanf("%d",&distance);
   
    
    printf("units to convert:\n1. meters\n2. feets\n3.inches\n4.centimeters"  );
    scanf("%d",&choice);
    
    if(choice==1){
        printf("Distance in meters is: %d meters ",distance*1000);
        
    }
    else if(choice==2){
         printf("Distance in feets is: %d feets",distance*3281);
        
    }
    else if(choice==3){
         printf("Distance in inches is:%d inches",distance*39372);
        
    }
    else if(choice==4){
         printf("Distance in feets is: %d centimeters",distance*100000);
        
    }
    else{
        printf("invalid input");
    }
    return 0;
}