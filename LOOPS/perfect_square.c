#include <stdio.h>

int main(){

    int n,i,a=0;
    printf("Enter number: ");
    
    scanf("%d",&n);
    
    for(i=1;i<n;i++){
        
    
    if(n%i==0){
      a=a+i;  }
    } 
    
    if(a==n){
        printf("Perfect square number");
    }
    else{
        printf("Not a Perfect square number");
    }
    return 0;
}