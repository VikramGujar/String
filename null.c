// Every string is having a null charector at its end 
// The null character indicates that the string is ended [\0]

#include<stdio.h>
int main()
{
    char name[20] = "Vikram\0Gujar";
    puts(name);
    // This code will print just Vikram cose after reaching \0 character
    // It will consider the string is ended
}