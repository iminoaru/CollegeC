// factorial using recursion


#include <stdio.h>
int fact(int n);

int main()
{
    printf("%d",fact(5));
    return 0;
}

int fact(int n){
     if(n==1){
        return 1;
}
    
    int factNumMinus1=fact(n-1);
    int fact=n*factNumMinus1;
    
}