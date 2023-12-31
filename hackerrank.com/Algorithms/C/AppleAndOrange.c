void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int countApple = 0, countOrange = 0;

    for (int i = 0; i < apples_count; i++)
        if (a + apples[i] >= s && a + apples[i] <= t)
            countApple++;
            
    for (int i = 0; i < oranges_count; i++)
        if (b + oranges[i] >= s && b + oranges[i] <= t)
            countOrange++;
    
    printf("%d\n%d", countApple, countOrange);
}