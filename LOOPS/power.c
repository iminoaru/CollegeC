#include <stdio.h>


int main(){
    
    int a , b , c=1;
   
    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("Enter b: ");
    scanf("%d",&b);
    
    while(b>0){
        
        c=c*a;
        b=b-1;
    }
    
    
    printf("%d",c);
    return 0;
}
