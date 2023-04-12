// Write a C program to copy the contents of one file to another file.
#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char filename1[100], filename2[100], ch;

    printf("Enter the source filename: ");
    scanf("%s", filename1);
    printf("Enter the destination filename: ");
    scanf("%s", filename2);

    fp1 = fopen(filename1, "r");

    if (fp1 == NULL) {
        printf("Source file not found!\n");
        return 0;
    }

    fp2 = fopen(filename2, "w");

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
