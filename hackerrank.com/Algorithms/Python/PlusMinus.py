def plusMinus(arr):
    # Write your code here
    countList = [0, 0, 0]
    for a in arr:
        if a > 0:
            countList[0] += 1
        elif a < 0:
            countList[1] += 1
        else:
            countList[2] += 1
    
    for i in countList:
        print(i / len(arr))