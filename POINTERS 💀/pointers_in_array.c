
#include <stdio.h>

int main(){
  
    int arr[]={1,2,3,4,5,6,7,8};
    
//    int *ptr1 = &arr[0];      -- pointer will store '1'
//    int *ptr2 = &arr[5];      -- pointer will store '6'
  
    int *ptr1 = arr + 0;      //-- pointer will store '1'
    int *ptr2 = arr + 5;      //-- pointer will store '6'
    
    printf("%d\t",*ptr1);     // 1
    printf("%d\t",*ptr2);     // 6

//    printf("\n%d   ",&arr);   --address of first element
//    printf("%d   ",&arr[0]);  --address of first element
//    printf("%d   ",&arr[1]);  --address of second element
//    printf("%d   ",&arr[5]);  --address of sixth element
     
    printf("\n%d   ",&arr);                                   // address of first element
    printf("%d\t",ptr1+2);                                    // adress of first element + 8
    printf("%d\t",ptr1-ptr2);                                 // -5  ( ptr1-ptr2/4 )
    printf("%d\t",(long double*)ptr1-(long double*)ptr2);     // -2  ( 20/12 )
    printf("%d\t",(char*)ptr1-(char*)ptr2);                   // -20 ( 20/1 )
      
    return 0;
}
