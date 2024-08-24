// How you can take a string from user 

#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter name : ");
    scanf("%s",name); 
    // String holds addres thats why dont need to use &
    // Scanf can just string till the space
    puts(name);

}