#include <string.h>
#include <stdbool.h>


bool startswith(const char *pre, const char *str)
{
    size_t lenpre = strlen(pre),
           lenstr = strlen(str);
    return lenstr < lenpre ? false : memcmp(pre, str, lenpre) == 0;
}


int prefix_of_word(char* s, char* p)
{
    int count=1;
    char *t = strtok(s, " ");
    
    while (t != NULL)
    {   
        if (startswith(p, t))
            return count;

        t = strtok(NULL, " ");
        count++;    
    }

    return -1;
}
