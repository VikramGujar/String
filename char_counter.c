// Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .#include <stdio.h>

#include<stdio.h>
#include <string.h>

int main()
{
    char str[100]; 
    int vowel = 0, consonant = 0, digits = 0, specialChar = 0;
    puts("Enter a string: ");
    gets(str);
    
    
    for(int i = 0;i<strlen(str); i++)
    {
        if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        
        else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
                str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vowel++;
        }
        
        else if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ) {
            consonant++;
        }
        else {
            specialChar++;
        }
    }

    printf("Digits count = %d\n", digits);
    printf("Vowel count = %d\n", vowel);
    printf("Consonant count = %d\n", consonant);
    printf("Special Characters count = %d\n", specialChar);

    return 0;
}
