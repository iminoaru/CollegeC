//array reversal

#include <stdio.h>
int main(){
    
    int i,j,n;
    n=5;
    int arr[5]={1,2,3,4,5};
    
    for(i=0;i<n/2;i++){
        int temp;
        
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
    for(i=0;i<n;i++){
   printf("%d  ",arr[i]);
}
    return 0;
}
