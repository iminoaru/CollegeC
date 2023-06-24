/*Any character is entered through the keyboard; write a program to determine whether
the character entered is a capital letter, a small case letter, a digit or a special symbol.*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
   
    if(ch>='0' && ch<='9'){
        printf(" %c character is a digit",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf(" %c character is a capital letter",ch);
    }
    else if(ch>='a' && ch>='z'){
        printf("%c character is a small letter",ch);
    }
    else{
        printf("%c special character",ch);
    }
   
   
    return 0;
}

