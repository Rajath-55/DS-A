t = int(input())
while t!=0:
    t -=1
    n = int(input())
    lst = list(map(int, input().strip().split()))
    counts = dict()
    visited = ()
    for i in lst:
        counts[i] = counts.get(i, 0) + 1
    for k in range(n):
        for j in range(k+1, n):
            