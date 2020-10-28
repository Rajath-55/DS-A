import random

def trollface(text):
    res = []
    b = '...ok boomer'
    for i in range(len(text)-len(b)):
        r = random.randint(0,1)
        res.append(text[i].upper()) if r else res.append(text[i])

    res.append(b)
    return ''.join(res)


s = str(input())
print(trollface(s))



