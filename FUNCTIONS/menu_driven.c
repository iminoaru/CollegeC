/* Write a Menu Driven program to find addition, subtraction, multiplication and division all
 using one user defined function for each operation. */

#include <stdio.h>
int sum(int num1,int num2){
    return num1+num2;
}

int difference(int num1,int num2){
    return num1-num2;
}

int product(int num1,int num2){
    return num1*num2;
}

float division(int num1,int num2){
    return num1/num2;
}

int main(){
    
    int num1,num2,choice;
    
    printf(" 1. Sum\n 2. Difference\n 3. Product\n 4. Division\n Enter choice : ");
    scanf("%d",&choice);
    
    printf(" Enter Numbers: ");
    scanf("%d%d",&num1,&num2);
    
    if(choice==1){
        printf("%d\n",sum(num1,num2));
    }
    
    if(choice==2){
        printf("%d\n",difference(num1,num2));
    }
    
    if(choice==3){
        printf("%d\n",product(num1,num2));
         
    }
    
    if(choice==4){
        printf("%.2f\n",division(num1,num2));
    }
    else{}
    return 0;
}
