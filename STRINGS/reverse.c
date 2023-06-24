#include<stdio.h>

int main()
{
    char str[100];
    int strlen(const char*str);
    int i,z,temp;
    printf("enter the sentence :");
    gets(str);
    z=strlen(str);
    for(i=0;i<z/2;i++)
    {
        temp=str[i];
        str[i]=str[z-i-1];
        str[z-i-1]=temp;
    }
    puts(str);

    return 0;
}
