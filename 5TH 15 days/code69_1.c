// C program to create a file, write some text to it, and then read the text back and print it to the console.
#include <stdio.h>
int main()
{
    char text[100];
    FILE *fp;

    fp = fopen("Myfile.txt", "w");
    
    if (fp != NULL)
    {
        printf("File created/opened successfully\n");
    }
    else
    {
        printf("File not created or opened successfully");
    }
    fprintf(fp, "Hello world Programs using file\n");

    fclose(fp);

    fp = fopen("Myfile.txt", "r");

    printf("The elements in the file are:-\n");
    fgets(text, 100, fp);

    printf(("Text from file are %s", text));

    fclose(fp);

    return 0;
}