def solve():
    n = int(input())
    arr = list(map(int, input().strip().split()))
    arr = arr[::-1]
    for i in arr:
        print(i, end=" ")
    print()    







t = int(input())
while t!=0:
    t -=1
    solve()
