/* WAP to divide one number by another without using the division operator. */


#include<stdio.h>

int divide(){
    
    int i=0;
    int num1 , num2;
    
    printf("enter numbers: ");
    scanf("%d%d",&num1,&num2);
    
    for( ;num1>=num2;i++){
       num1 -= num2;
    }
        return i;
}

int main(){
    printf("Divided Value is %d",divide());
    
    return 0;
}
