// dont include special charecter 

#include<stdio.h>
int main()
{
    char name[20];
    printf("Enetr you name");
    scanf("%[^@#*]",name);
    // now if you enter a special charecter in name it will dont scan that and terminate string there
    puts(name);
}