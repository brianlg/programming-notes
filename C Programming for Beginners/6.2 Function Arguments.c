// return type -- void?

#include <stdio.h>

// Function Prototype
void greetUserByName(char name[]);
void addThree(int x, int y, int z);

// Main Function
int main()
{
    char username[20];
    printf("What is your name? \n");
    scanf("%s", username);
    addThree(10, 25, 74);
    greetUserByName(username);
    printf("Thanks for playing.\n");
    
    return 0;
}

void greetUserByName(char name[])
{
    printf("Thanks for typing your name %s!\n", name);
}

void addThree(int x, int y, int z)
{
    int result = x + y + z;
    printf("The result of adding %d, %d, %d is %d\n", x, y, z, result);
}




// we create a character array called username with 20 characters
// ask user whats your name
// user types their name
// we store in username
// we pass the username value into greetUserByName function
// username is assigned to the name character array
// we print out the name