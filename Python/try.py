t = int(input())
while t!=0:
    t -=1
    n,a,b,c,d = map(int, input().strip().split())
    mini = (a-b)*n
    maxi = (a+b)*n
    maxisum = c+d
    minisum = c-d
    if mini>=minisum and mini<=maxisum or maxi>=minisum and maxi <=maxisum or mini<minisum and maxi>maxisum:
        print("Yes")
    else:
        print("No")
    