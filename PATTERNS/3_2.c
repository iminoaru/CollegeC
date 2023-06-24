/* 
 
            1 
          2 2 2 
        3 3 3 3 3 
      4 4 4 4 4 4 4 
    5 5 5 5 5 5 5 5 5 

*/

#include <stdio.h>

int main(){
    
  int i, j,  k, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    
    for(i=1; i<=rows; i++) {
       
        for(j=i; j<rows; j++){
            printf("  ");
        }
         
         for ( k = 1; k <= ( 2 * i - 1); k++){  
            printf ("%d ",i); // print the Star  
        }  
        printf("\n");
    }

    return 0;
}