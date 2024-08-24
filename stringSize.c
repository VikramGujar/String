// Size in string



#include<stdio.h>
int main()
{
    char name[2] = "Vikram"; //Size is short it will print garbeg
    char Sname[] = "Gujar"; // size is not complsory string will gate it aouto if you dont provide
    char clg[2] = {'D'}; // string is nothing but a character Array 
    char scl[] = {'M'}; // It will print garbege after M

    puts(name);
    puts(Sname);
    puts(clg);
    puts(scl);
}