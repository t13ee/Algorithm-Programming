def is_prime(n):
    if n <= 1:
        return False 
    for i in range(2, n):
        if n % i == 0: 
            return False  
    return True


def count_bits_prime(L, R):
    count = 0
    
    for b in range(L, R+1):
       if is_prime(f'{b:08b}'.count("1")):
           count += 1

    return count