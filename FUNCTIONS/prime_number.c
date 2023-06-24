/* WAP to determine if a given number is prime or not. */

#include <stdio.h>

void Prime_Number(){
    
    int i,num,j=0;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
    for(i=2;i<=num;i++){
        if(num%i==0){
            j++;
        }
        else{}
    }
    if(j==1){
        printf("Prime");
    }
    else{
        printf("Non Prime");
    }
    return;
}

int main(){
    
    Prime_Number();
    return 0;
}
