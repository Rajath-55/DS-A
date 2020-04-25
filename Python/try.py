t = int(input())
while t != 0:
    t -= 1
    n = int(input())
    arr = list(map(int, input().strip().split()))
    count = 0
    res = dict()
    for i in range(len(arr)):
        if i != len(arr)-1:
            if arr[i] > 0 and arr[i+1] < 0 or arr[i] < 0 and arr[i+1] > 0:
                count += 1
                res[arr[i]]= arr[i+1]
               

            else:
                count = 0
        else:
            if arr[i] > 0 and arr[i-1] < 0 or arr[i] < 0 and arr[i-1] > 0:
                count += 1
                res[arr[i]]=arr[i-1]
                
            else:
                count = 0

    print(count)
    print(res)
