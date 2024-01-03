def kangaroo(x1, v1, x2, v2):
    # Write your code here
    limit = abs((x1 * v2) - (x2 * v1))
    for _ in range(1, limit + 1):
        if x1 == x2:
            return "YES"
        x1 += v1
        x2 += v2
    return "NO"