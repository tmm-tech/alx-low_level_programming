#include <unistd.h>

char *_strcat(char *dest, char *src)
{
    char *start = dest;
    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}

