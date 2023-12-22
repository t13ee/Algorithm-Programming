int groupedBits(int n)
{
    int count=0, b;
    bool accept=true;

    while ((float)n / 2 != 0)
    {
        b = n % 2;
        n /= 2;

        if (b == 1 && accept)
        {
            count += 1;
            accept = false;
        } else if (b == 0)
            accept = true; 
    }
    
    return count;
}
