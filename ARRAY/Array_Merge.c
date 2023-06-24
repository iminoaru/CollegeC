#include <stdio.h>

int main(){

    int A[5]={1,2,3,4,5};
    int B[3]={6,7,8};
    int C[8];

    for(int i=0;i<8;i++){
        if(i<5){
            C[i]=A[i];
        }
        else{
            C[i]=B[i-5];
        }
    }
    for(int i=0;i<8;i++){
            printf("%d ",C[i]);
    }

return 0;
}
