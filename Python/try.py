def decimalToBinary(n):  
    return str(bin(n).replace("0b", ""))


def binaryConcat(a,b):
    a1 = decimalToBinary(a)
    b1= decimalToBinary(b)
    c = a1+b1
    d = b1+a1
    xpy = int(c,2)
    ypx = int(d,2)
    return xpy-ypx
def solve():
    # print(decimalToBinary(200))
    n = int(input())
    maxi=[]
    arr = list(map(int,input().strip().split()))
    for i in arr:
        for j in arr:
            maxi.append(binaryConcat(i,j))   
    maxi = sorted(maxi)
    print(maxi[len(maxi)-1])
t = int(input())
while t!=0:
    t-=1
    solve()
    


