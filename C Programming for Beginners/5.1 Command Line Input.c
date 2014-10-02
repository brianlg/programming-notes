#include <stdio.h>

int main()
{
    char response;
    
    printf("Are you over the hill? (Y=Yes, N=No\n");
    response = getchar();
    // Get char takes ONE character - a char.
    
    if (response == 'Y' || response == 'y')
    {
        printf("Sorry to hear it! Enjoy your life now!\n");
    }
    else if (response == 'N' || response == 'n')
    {
        printf("Glad you're not over the hill :).\n");
    }
    else
    {
        printf("You didn't type Y or N, idiot.\n");
    }
    
    //printf("Your response: %c\n", response);
    
    getchar();
    
-----------------------------------------------------------------------
    
    char name[20];
    
    printf("Please input your name: ");
    //scanf("%s", name);  // puts input into a string (%s) called name
                        // will only read up to the first whitespace!
    scanf("%19s", name);    //will accept up to the 19th character
    
    printf("Your name is %s", name);
    printf("\n");

-----------------------------------------------------------------------
    
    int age;
    printf("How old are you?: \n");
    scanf("%d", &age);  //& means address of.
    
    age = age * 7;
    
    printf("In dog years, you are %d years old.\n", age);
    
    return 0;
}
