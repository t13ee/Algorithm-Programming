def countApplesAndOranges(s, t, a, b, apples, oranges):
    # Write your code here
    countApple, countOrange = 0, 0
    for apple in apples:
        if s <= a + apple <= t:
            countApple += 1
    for orange in oranges:
        if s <= b + orange <= t:
            countOrange += 1
    
    print(f"{countApple}\n{countOrange}")