def divideArr(arr, n):
    lSum = 0
    for i in range(n):
        lSum += arr[i]
        rSum = 0
        for j in range(i+1, n):
            rSum += arr[j]
        if lSum == rSum:
            return True
    return False


def solve():
    n, k = map(int, input().strip().split())
    heights = list(map(int, input().strip().split()))
    s = sum(heights)
    if s < 2*k:
        print(-1)
        return

    if s == 2*k and divideArr(heights, n):
        print(n)
        return
    heights.sort(reverse=True)
    runningSum = 0
    index = 0
    for i in range(len(heights)):
        runningSum += heights[i]
        if runningSum >= 2*k:
            index = i
            break
    newArr = heights[:index+1]
    oldArr = heights[index+1:]
    print(newArr)
    if sum(newArr) == 2*k and divideArr(newArr, len(newArr)):
        print(len(newArr))
        return
    tower1 = [newArr[0]]
    tower2 = []
    res = 0
    runningSum = 0
    idx = 0
    for i in range(len(newArr)-1, 0, -1):
        tower1.append(newArr[i])
        if sum(tower1) >= k:
            idx = i
            res += len(tower1)
            break
    print(tower1)
    tower2 = newArr[1:idx]
    print(tower2)


t = int(input())
while t != 0:
    t -= 1
    solve()
