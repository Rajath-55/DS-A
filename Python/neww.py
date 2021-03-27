
def solve(t):
    n = int(input())
    arr = list(map(int, input().split()))
    arr1 = sorted(arr)
    count = 0
    i = 0
    while arr!=arr1:
        mini = min(arr1[i:], default=-1)
        count+=mini-i+1
        temp = arr[i:mini+1]
        temp = temp[::-1]
        arr = arr[:i] + temp + arr[mini+1:]
        i+=1
        if i==10: break
        print(arr)
    print("Case #" + str(t) +": " + str(count))
        
t = int(input())
while t!=0:
    solve(t)
    t-=1
