#include<stdio.h>

int main()
{
    char str[100];
    int i,v=0;
    char x;
    printf("enter the sentence :");
    gets(str);
    printf("enter the letter you want to check :");
    scanf("%c",&x);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==x)
        v++;
    }
    if(v>=1)
     printf("\n yes its present");
      else
      printf("\n its not present");
    return 0;
}
