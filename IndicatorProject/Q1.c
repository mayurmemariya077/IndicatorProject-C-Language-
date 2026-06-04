



#include <stdio.h>

int stringLength(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        count++;
        str++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter any string: ");
    scanf("%[^\n]", str);

    printf("The length of string is: %d", stringLength(str));

    return 0;
}