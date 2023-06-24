/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int gcd(){
    
    int a , b , c , x;
    
    printf("Enter numbers: ");
    scanf("%d%d",&a,&b);
    
    if(a>b){
        c=b;
    }
    else{
        c=a;
    }
    
    for(int i=1;i<=c;i++){
        if(a%i==0 && b%i==0){
          x=i;
            
        }
        
    }
        return x;
    
}


int main()
{
    printf("%d",gcd());
    
    return 0;
}