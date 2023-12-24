void sort(int arr[], int n)
{
    int tg;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] >= arr[j])
            {
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;        
            }
        }
    }
}


void miniMaxSum(int arr_count, int* arr) {
    sort(arr, arr_count);
    long max=0, min=0;

    for (long i = 0; i < 4; i++)
        min += arr[i];
    for (long j = arr_count-1; j >= arr_count-4; j--)
        max += arr[j];

    printf("%ld %ld", min, max);
}
