//element search

#include<stdio.h>
int main(){
    int i;
    int n=9;
    int pro=1;
    int element;
    
    printf("enter element: ");
    scanf("%d",&element);
    
   
    int arr[9]= {24,678,10,78,1,45,2,67,54};
     
    for(i=0;i<n;i++){
        if(element==arr[i]){
            printf("Element %d found at %d",element,i);
            break;
        }
    }
    if(i==n){
        printf("no element found");
    }
    
            
             
    return 0;
   
}
