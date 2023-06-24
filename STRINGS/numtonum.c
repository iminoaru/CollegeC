#include<stdio.h>

int main()
{
    char str[100];
    int strlen(const char*str);
    int i,z,temp=1,a=0,s;
    printf("enter the number upto 10 digit :");
    gets(str);
    z=strlen(str);
   for(i=0;i<z-1;i++)
   temp=temp*10;
   for(i=0;i<z;i++)
   {
    s=str[i]-48;
    a=s*temp+a;
    temp=temp/10;
   }

   printf("Here is your intezer :%d",a);
   

    return 0;
}
