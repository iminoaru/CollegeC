
#include <stdio.h>

void Swap(int N1 , int N2){
    
    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;
    
    printf("%d\t%d\n",N1,N2); //swapped
}

int main(){
    
    int N1 = 3;
    int N2 = 5;
    
    printf("%d\t%d\n",N1,N2); //original
    Swap(N1,N2);
    printf("%d\t%d",N1,N2);  // should be swapped but isnt because of scope of the variable.

    return 0;
}
