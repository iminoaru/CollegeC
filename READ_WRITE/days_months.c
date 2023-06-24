/*days into months(of 30 days) and days */

#include<stdio.h>

int main (){
   
    int months, days ;
   
    printf("Enter days: ") ;
    scanf("%d", &days) ;
  
    months = days / 30 ;
    days = days % 30 ;
   
    printf("Months are %d and days are %d", months, days) ;
   
    return 0;
}