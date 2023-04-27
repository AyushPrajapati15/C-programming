// Write a program to count the number of vowels and consonants in a given string using recursion
#include <stdio.h>

int Vowels(char str[])
{
    if (str[0] == '\0')
    {
        return 0;
    }

    int count = Vowels(str + 1);

    if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U')
    {
        return count + 1;
    }

    return count;
}

int Consonants(char str[])
{
    if (str[0] == '\0')
    {
        return 0;
    }

    int count = Consonants(str + 1);

    if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
    {
        if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U')
        {
            return count;
        }
        return count + 1;
    }

    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int TotVowels = Vowels(str);
    int TotConsonants = Consonants(str);

    printf("Number of vowels: %d\n", TotVowels);
    printf("Number of consonants: %d\n", TotConsonants);

    return 0;
}
