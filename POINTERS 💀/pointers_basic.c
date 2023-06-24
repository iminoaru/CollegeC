#include <stdio.h>

int main(){
    int var=10;
    
    int *Pvar=&var;
    int **Pvar2=&Pvar;
    
    printf("%d  ",var);      //10
    printf("%d  ",&var);     //adress var
    printf("%d  ",Pvar);     //adress var
    printf("%d  ",*Pvar);    //10
    printf("%d  ",&Pvar);    //adress of Pvar
    printf("%d  ",**Pvar2);  //10
    printf("%d  ",*Pvar2);   //adress of var
    printf("%d  ",&Pvar2);   // adress of Pvar2
    printf("%d  ",&*Pvar2);  // adress of Pvar
    printf("%d  ",*&Pvar2);  // adress of Pvar
    printf("%d  ",&**Pvar2); //adress of var
   
    return 0;
}
