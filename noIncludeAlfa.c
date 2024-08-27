// Write a scan function that will not going to take numbers in string

#include<stdio.h>
int main()
{
    char name[10];
    puts("Enetr name :");
    scanf("%[^a-z]",name);
    // this scanf will not take lower alfabate
    puts(name);
}