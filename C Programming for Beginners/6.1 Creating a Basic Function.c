// We created two functions 
// 1. greetTheUser
// 2. sayGoodbye

#include <stdio.h>

//Function prototype - describes to compiler before we write it.
void greetTheUser(void);
void sayGoodbye(void);

int main()
{
    greetTheUser();
    sayGoodbye();
    return 0;
}


void greetTheUser(void)
{
    printf("Hello User! How are you doing?\n");
}

void sayGoodbye(void)
{
    printf("Goodbye User!\n");
}