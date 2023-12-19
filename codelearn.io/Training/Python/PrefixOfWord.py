def prefix_of_word(s, p):
    for num, t in enumerate(s.split(" ")):
        if t.startswith(p):
            return num + 1
    
    return -1


# print(prefix_of_word("CodeLearn is an online platform","on"))