//2D array length with functions.

#include <stdio.h>

void len(int row,int col,int A[row][col]){

    printf("%u  \n",sizeof(A));
    printf("length : %d",sizeof(A)/sizeof(A[0]));
}

int main(){

    int A[3][3]={1,2,3,4,5,6,7,8,9};
    len(3,3,A);

return 0;

}
