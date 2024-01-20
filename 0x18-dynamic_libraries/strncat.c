#include <unistd.h>

char *_strncat(char *dest, char *src, int n)
{
    char *start = dest;
    while (*dest)
        dest++;
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';
    return start;
}

