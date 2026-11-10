#include <stdlib.h>
#include <stdio.h>

int str_cmp(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return (0);
        }
        i = i + 1;
    }
    if (str2[i] != '\0')
    {
        return (0);
    }
    return (1);
}

int main()
{
    char str1[] = "hello world !";
    char str2[] = "hello world!";

    int i = str_cmp(str1, str2);
    printf("%d\n", i);

    exit(0);
}