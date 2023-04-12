// Write a C program to read a file and count the number of characters, words, and lines in the file.
#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100], ch;
    int chars = 0, words = 0, lines = 0, flag = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("File not found!\n");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if (ch == '\n')
        {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            flag = 0;
        }
        else if (flag == 0)
        {
            flag = 1;
            words++;
        }
    }

    printf("Number of characters: %d\n", chars);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    fclose(fp);

    return 0;
}
