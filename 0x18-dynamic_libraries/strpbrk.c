#include <unistd.h>

char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (_strchr(accept, *s))
            return s;
        s++;
    }
    return NULL;
}
