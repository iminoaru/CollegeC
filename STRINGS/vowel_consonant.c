#include<stdio.h>

int main()
{
    char str[100];
    int i,c=0,v=0;
    printf("enter the sentence :");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {v++;
        }
        else if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
        {c++;
        }
    }
    printf("\n vowel is :%d",v);
    printf("\nconstant is :%d",c);

    return 0;
}
