long aVeryBigSum(int ar_count, long* ar) {
    long s=0;
    for (int i=0; i < ar_count; i++)
        s += ar[i];
    
    return s;
}