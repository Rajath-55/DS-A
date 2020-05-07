t = int(input())
while t != 0:
    t -= 1
    n = int(input())
    count = 0
    for i in range(30000, 0, -1):
        s = int(i*(3*i+1)/2)
        while s<=n:
            count +=1
            n -=s

    print(count)   
