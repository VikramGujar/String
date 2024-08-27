// Write a scan function that will not going to take numbers in string

#include<stdio.h>
int main()
{
    char name[10];
    puts("Enetr name :");
    scanf("%[^0-9]",name);
    // this scanf will not take numbers
    puts(name);
}