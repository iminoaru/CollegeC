
#include <stdio.h>

int main(){
    
    int i,sum;
    int arr[6]={1,7,3,3,5,6};
    int max=arr[0];
    int *ptr = arr;
    
    for(i=0;i<6;i++){
        if(max<*(ptr + i)){
            max=*(ptr + i);
        }
    }
    printf("%d  ",max);
  
    return 0;
}