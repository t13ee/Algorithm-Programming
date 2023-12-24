void plusMinus(int arr_count, int* arr) {
    float countPositive=0, countNegative=0, countZeros=0;
    
    for (int i=0; i < arr_count; i++)
    {
        if (arr[i] > 0)
            countPositive++;
        else if (arr[i] < 0)
            countNegative++;
        else
            countZeros++;    
    }
    
    printf("%f\n%f\n%f", countPositive / arr_count, countNegative / arr_count, countZeros / arr_count);  
}