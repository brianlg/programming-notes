#include <stdio.h>

int main()
{
    float gpas[] = {3.17f,3.99f,2.5f,3.21f,1.95f,1.65f,3.45f,3.5f,4.0f};
    float total = 0.0;
    
    int i;
    
    for (i=0; i < 9; i++)
    {
        printf("GPA %d: %.3f\n", (i+1), gpas[i]);
        total += gpas[i];
    }
    
    // printf("The total GPA is %.2f", total);
    printf("The average GPA is %.4f\n", (total/9.0));
    
    return 0;
}