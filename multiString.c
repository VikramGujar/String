// Here how you can store multiple strings
// and how to print them

#include<stdio.h>
int main()
{
    char Cricketrs [5][20] = {"Virat Kohli" , "Ab De Villiers" , "Ms Dhoni" ,"Sachin" , "Rohit Sharama"};

    puts("My fav Crik :");

    for (int i = 0; i < 5; i++)
    {
        puts(Cricketrs[i]);
    }
    
}