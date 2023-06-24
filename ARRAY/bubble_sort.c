//bubble sort

#include<stdio.h>
int main(){
    int j,i,size,temp;
    int n=9;
   
   
   
    int arr[9]= {24,678,10,78,1,45,0,67,54};
     
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
             
             if(arr[j]<arr[j-1]){
         
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1]=temp;
            }   
        }
    }
    
    for(j=0;j<n;j++){
        printf("%d  ",arr[j]);
    }
    
    return 0;
   
}
