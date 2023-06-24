
#include <stdio.h>

void Swap(int *N1 , int *N2){
    
    *N1 = *N1 + *N2;
    *N2 = *N1 - *N2;
    *N1 = *N1 - *N2;
    
    printf("%d\t%d\n",*N1,*N2); //swapped
}

int main(){
    
    int N1 = 3;
    int N2 = 5;
    
    printf("%d\t%d\n",N1,N2); // original
    
    Swap(&N1,&N2);            // adding the address to the function.
    printf("%d\t%d",N1,N2);   // swapped because it refered to the values of main()

    return 0;
}
