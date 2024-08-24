// How you can use gets for scaning string

#include<stdio.h>
int main()
{
    char name[20];
        
    printf("Enter name : ");
    scanf("%[^\n]",name);
    puts(name);
    // scanf with magic or scan set charecter can read string with spaces
}