/*Write a program to create a list of the leap years found in a given range of years.*/

#include <stdio.h>

int main() {
    int year_start , year_end;
    
    printf("Enter starting year: ");
    scanf("%d",&year_start);
    
    printf("Enter ending year: ");
    scanf("%d",&year_end);
    
    while(year_start <= year_end){
        
        if((year_start%4==0 && year_start%100!=0) || (year_start%400==0)){
            printf("%d is leap year\n",year_start);}
            year_start = year_start + 1;
        
    }
    
   

    return 0;
}