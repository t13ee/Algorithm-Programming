// #include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool startsWith(const char *pre, const char *str)
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
        if (startsWith(p, t))
            return count;

        t = strtok(NULL, " ");
        count += 1;    
    }

    return -1;
}

/*
int main()
{
    char s[100]="CodeLearn is an online platform", p[100]="on";
    
    printf("%d", prefix_of_word(s, p));
    
    return 0;
}
*/