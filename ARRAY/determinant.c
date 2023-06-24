// determinat of 2d array

#include <stdio.h>

int main(){
    
    int arr[3][3] = { {1,3,3} , {4,5,6} , {7,8,9} };

    int det1 = arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]));
    int det2 = arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]));
    int det3 = arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));

    int determinant = det1 - det2 + det3;
   
    printf("DETERMINANT : %d",determinant);

return 0;
}