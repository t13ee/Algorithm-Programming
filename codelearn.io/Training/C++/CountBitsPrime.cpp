#include <math.h>


bool is_prime(int n)
{
    if (n <= 1) return false;
    for (int i=2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
        
    return true;
}


int decimal_to_binary_and_count(int n)
{
    int count=0;
   
    while (n != 0)
    {
        if (n & 0x01 == 1)
            count++;
        n = n >> 1;
    }

    return count;
}


int countBitsPrime(int L, int R)
{
    int count=0;
    for (int i=L; i <= R; i++)
        if (is_prime(decimal_to_binary_and_count(i)))
            count++;
    return count;
}