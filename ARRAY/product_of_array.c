//product

#include<stdio.h>
int main(){
  
    int n=9;
    int pro=1;
   
   
    int arr[9]= {24,678,10,78,1,45,2,67,54};
     
    for(i=0;i<n;i++){
        pro=pro*arr[i];
    }
    printf("%d",pro);
            
             
    return 0;
   
}
