#include<stdio.h>
int main()
{
    char str[100];
    printf("enter the sentence :");
    gets(str);
    int strlen(const char*str);
    int i,z;
    z=strlen(str);
    for(i=0;i<z;i++)
    {
        if((i==0 || str[i-1]==' ')&&str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && (str[i+3]==' '|| str[i+3]=='\0') )
            i=i+3;
        printf("%c",str[i]);
    }
  return 0;
}
