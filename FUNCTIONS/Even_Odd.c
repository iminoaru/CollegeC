/*WAP to determine whether a number is ‘even’ or ‘odd’.*/

#include <stdio.h>

void EvenOdd(){
    
    int num ;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("EVEN");
    }
    
    else{
        printf("ODD");
    }
    return;
}

int main(){
    
    EvenOdd();
    
    return 0;
}
