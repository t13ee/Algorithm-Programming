#include <stdlib.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    int limit = abs((x1 * v2) - (x2 * v1));
    for (int i = 1; i <= limit; i++) {
        if (x1 == x2)
            return "YES";
        x1 += v1;
        x2 += v2;
    }
    return "NO";
}