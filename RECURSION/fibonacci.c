#include <stdio.h>

int fib(int n);

int main(){
    
    printf("%d",fib(6));
    return 0;
}

int fib(int n){
     if(n==1){
        return 1;
     }
     if(n==0){
        return 0;    
     }

    int fibNumMinus1=fib(n-1);
    int fibNumMinus2=fib(n-2);
    int fib =fibNumMinus1+fibNumMinus2;
    
    return fib;
}
