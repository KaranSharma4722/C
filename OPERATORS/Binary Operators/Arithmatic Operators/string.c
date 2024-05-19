#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20];
    int i;
    puts("enter first string:");
    gets(a);
    puts("enter second string:");
    gets(b);
    i = strcmp(a, b);
    if (i == 0)
    {
        printf("Both strings are equal\n");
    }
    else if (i < 0)
    {
        printf("First string is small\n");
    }
    else if (i > 0)
    {
        printf("First string is great\n");
    }
    return 0;
}

