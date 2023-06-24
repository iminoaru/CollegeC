#include <stdio.h>
void swap(int a, int b);
int main()
{
    int a,b;
    printf("enter values: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
}

void swap(int a, int b){
    
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("swapped: %d  %d ",a,b);

}
