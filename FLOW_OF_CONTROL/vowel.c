/* Write a program to check whether an alphabet entered by the user is a vowel or a 
consonant */


#include <stdio.h>

int main()
{
    
    char word;
    
    printf("enter word: ");
    scanf("%c",&word);

    if(word=='a' ||word=='e' ||word=='i' ||word=='o' ||word=='u' ){
        printf("it is a vowel.");
        
    }
    
    else{
        printf("it is a consonant.");
    }
    
    return 0;
}
