/*  WAP to read and write a 2-D array.  */

#include <stdio.h>

int main()
{
    
    int arr[3][3];
    
    //read
    printf("Enter Elements: \n");
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    //write
    printf("Elements are: \n");
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
return 0;
}