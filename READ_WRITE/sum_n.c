#include <stdio.h>

int main() {
    // Write C code here
    int a,b,sum=0;
    printf("Enter the number: ");
    scanf("%d",&b);
    
    for(a=1;a <= b;++a){
        sum += a;
    }
     printf("Sum is %d",sum);
    
    return 0;
}