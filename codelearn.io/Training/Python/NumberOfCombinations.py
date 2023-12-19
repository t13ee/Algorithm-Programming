def factorial(n):
    s = 1
    if (n == 0 or n == 1):
        return s
    else:
        for i in range(2, n+1):
            s *= i
        return s


def numberOfCombinations(n, k):
    return factorial(n) / (factorial(k)*factorial(n-k))


print(numberOfCombinations(35, 17))