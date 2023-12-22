int simpleArraySum(int ar_count, int* ar) {
    int s=0;
    for (int i=0; i < ar_count; i++)
        s += ar[i];
        
    return s;
}
