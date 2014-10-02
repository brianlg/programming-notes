#include <stdio.h>

int main()
{
    FILE *pFile;
    
    // a = append mode
    pFile = fopen("/Users/briangibson/Desktop/info.txt", "a");
    
    if(pFile!=NULL)
    {
        char name[20] = "Brian Gibson";
        float gpa = 3.50f;
        
        fprintf(pFile, "%s, %.2f\n", name, gpa);
        printf("The data has been recorded.\n");
        fclose(pFile);
    }
    else
    {
        printf("File Error.\n");
    }
    
    return 0;
}