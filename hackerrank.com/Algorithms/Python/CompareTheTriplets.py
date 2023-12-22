def compareTriplets(a, b):
    r = [0, 0]
    for i in range(len(a)):
        if a[i] > b[i]:
            r[0] += 1
        elif b[i] > a[i]:
            r[1] += 1
    return r