/* WAP to calculate the factorial of a given number. */

#include <stdio.h>

int factorial(){
    int  j=1;
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        j=j*i;
    }
    return j;
}

int main(){
 
  //  int i,j=1,num;
  //  printf("Enter number: ");
  //  scanf("%d",&num);
   
    printf("%d",factorial());
   
    return 0;
}
