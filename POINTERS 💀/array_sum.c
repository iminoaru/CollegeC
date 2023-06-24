#include <stdio.h>
#define len 5

int main(){

    int arr[len] = {1 , 2 , 3 , 4 , 5};
    int sum=0;
    int *ptr= &arr;
    
    for(int i=0;i<len;i++){
        sum+= *(ptr+i); //i moves the pointer to the next address of array after
    }                   //every loop run and each value is added to sum.
    
    printf("%d",sum);
    return 0;
}
