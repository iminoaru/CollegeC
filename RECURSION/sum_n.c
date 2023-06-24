#include <stdio.h>
int sum(int n);

int main(){
    
    int num;
    
    scanf("%d",&num); // taking num input.
    printf("%d",sum(num));
    return 0;
}

int sum(int n){
     if(n==1){
        return 1;
}
    
    int sumNumMinus1=sum(n-1);
    int fact=n+sumNumMinus1;
    
}