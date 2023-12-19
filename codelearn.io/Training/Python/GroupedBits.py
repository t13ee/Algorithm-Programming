def groupedBits(n):
    count = 0

    accept = True
    
    while n / 2 != 0:
        b = n % 2
        n //= 2

        if b == 1 and accept:
            count += 1
            accept = False
        elif b == 0:
            accept = True
    
    return count


# print(groupedBits(1259))

