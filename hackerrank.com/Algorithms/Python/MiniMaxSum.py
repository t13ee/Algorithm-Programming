def miniMaxSum(arr):
    # Write your code here
    arr.sort()    
    print(sum(arr[0:4]), sum(arr[::-1][0:4]))
