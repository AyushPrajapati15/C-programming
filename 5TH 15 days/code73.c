// Write a C program to read an integer from a file and then print the factorial of that integer to another file.
#include <stdio.h>
int main()
{
    FILE *in_file, *out_file;
    int n, i, fact = 1;
    in_file = fopen("input.txt", "r");
    if (in_file == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }
    
    fscanf(in_file, "%d", &n);
    fclose(in_file);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    out_file = fopen("output.txt", "w");
    if (out_file == NULL)
    {
        printf("Error opening output file.\n");
        return 1;
    }
    fprintf(out_file, "%d", fact);
    fclose(out_file);

    printf("Factorial written to output file.\n");

    return 0;
}
