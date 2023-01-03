// Write a C program to accept /reject a string based on a regular expression.

#include <regex.h>
#include <stdio.h>
#include <string.h>

#define STR_LENGTH 20

// Function to print the result
void print_result(int value, char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[--len] = '\0';
    }

    // If pattern found
    if (value == 0)
    {
        printf("Pattern found. The string %s is accepted.\n\n", str);
    }

    // If pattern not found
    else if (value == REG_NOMATCH)
    {
        printf("Pattern not found. The string %s is rejected.\n\n", str);
    }

    // If error occurred during Pattern
    // matching
    else
    {
        printf("An error occurred.\n");
    }
}

int main()
{
    // Variable to store initial regex()
    regex_t reegex;

    char reg_in[STR_LENGTH];
    printf("Enter Regex: ");
    fgets(reg_in, STR_LENGTH, stdin);
    printf("%s", reg_in);

    // Variable for return type
    int value;
    int value2;

    // Creation of regEx
    value = regcomp(&reegex, reg_in, 0);

    printf("Enter number of strings to match: ");
    int i;
    scanf("%d", &i);
    getchar();
    while (i)
    {
        printf("Enter string %d: ", i);
        char str[STR_LENGTH];
        fgets(str, STR_LENGTH, stdin);

        value = regexec(&reegex, str,
                        0, NULL, 0);

        print_result(value, str);
        i--;
    }
    return 0;
}