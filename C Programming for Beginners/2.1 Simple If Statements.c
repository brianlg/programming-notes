#include <stdio.h>

int main()
{
    int age = 19;
    int ageToVote = 18;
    
    if (age >= ageToVote)
    {
        printf("You are old enough to vote!\n");
    }
    else printf("You suck.");
    
    
    int ageOnBirthday = 21;
    if (ageOnBirthday == 21)
    {
        printf("You can drink nigguh!\n");
    }
    
    int fredsAge = 65;
    if (fredsAge > 60 || fredsAge < 90)
    {
        printf("Fred is between 60 and 70\n");
    }
    
    return 0;
}
