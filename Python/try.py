t = int(input())
while t != 0:
    t -= 1
    n = int(input())
    arr = []
    for i in range(n):
        r = input()
        arr.append(r)

    maxi = max(arr)
    pos = arr.index(max(arr))
    count = 0

    for i in range(pos, len(arr)):
        if pos == len(arr) - 1:
              k = -1
        elif pos < len(arr) - 1 and pos >= 0:
              k = (arr[pos+1])
        k = int(k)      
        while k != 0 and k != -1:
                k = k/2
                count += 1
                pos += 1
                print(count)

    print(count)
