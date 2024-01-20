#include <unistd.h>

char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;
    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }
    return start;
}
