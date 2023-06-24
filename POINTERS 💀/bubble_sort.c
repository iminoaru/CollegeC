
#include <stdio.h>
#define len 6

int main(){
    
    int arr[len]={2,4,1,7,9,4};
    int *ptr = arr;
    int temp;
    
    for(int i=0 ; i<len ; i++){
        for(int j=0 ; j<len-i ; j++){
            if(*(ptr + j) > *(ptr + j -1)){
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j - 1);
                *(ptr + j - 1) = temp;
                
            }
        }
    }
    
    for(int i=0 ; i<len ; i++){
        printf("%d  ", *(ptr + i));
    }

    return 0;
}
