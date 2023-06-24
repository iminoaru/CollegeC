// max and min 

#include <stdio.h>

int main(){
    int i,sum;
  
    int arr[6]={1,2,3,4,5,6};
     
    int min=arr[0];
    int max=arr[0];
    
    for(i=0;i<6;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    if(max<arr[i]){
        max=arr[i];
    }
}
printf("%d  %d ",min,max);
  
    return 0;
}
