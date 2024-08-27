// Reading and printing multiple strings

#include<stdio.h>
int main()
{
    char names[5][10];
    puts("Enter names :");

    for(int i=0;i<5;i++)
    {
        gets(names[i]);
    }
    puts("-------------------------------");
    for(int i=0; i<5; i++)
    {
        puts(names[i]);
    }

}