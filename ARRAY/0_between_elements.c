//WAP to read an array and insert 0 between every two elements of the array.

#include <stdio.h>

int main(){

    int size, new_size;

    printf("Enter the size: ");
    scanf("%d",&size);

    new_size=size*2-1;
    int A[new_size];

    printf("Enter the elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }

    for(int i=2*size-2;i>=2;i-=2){
        A[i]=A[i/2];
        A[i-1]=0;
    }

    printf("New Array is: \n");
    for(int i=0;i<new_size;i++){
            printf("%d ",A[i]);
    }

return 0;
}
