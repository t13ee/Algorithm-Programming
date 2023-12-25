int find_max(int arr_count, int* arr) {
    int max = arr[0];
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int birthdayCakeCandles(int candles_count, int* candles) {
    int max = find_max(candles_count, candles), count = 0;
    for (int i = 0; i < candles_count; i++)
        if (max == candles[i])
            count++;
    
    return count;
}