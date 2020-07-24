
def mitosis(array, left, right, r1):
    print(1, r1+1, left+1, r1+1, right+1)
    mid = (left+right)//2
    x = int(input())
    if x > 0 and left!=right  and x!=right+1-left:
        mitosis(array, left,mid, r1)
        mitosis(array, mid+1, right, r1)
    elif x== right+1-left:
        for i in range(left,right+1):
            array[r1][i]=1
        # print("All1")    
        return    
    elif left==right:
        array[r1][left]=x
        # print("left==right")
        return
    elif x==0 :
        for i in range(left,right+1):
            array[r1][i]=0
        # print("x==0")    
        return       
    if x == -1:
        exit()
    if left>right or left>n or right > n:
        # print("left>right")
        return

t = int(input())
while t != 0:
    t -= 1
    n, p = map(int, input().strip().split())
    r1 = 0
    r2 = 0
    c1 = 0
    c2 = n-1
    array = [[0 for i in range(n)] for j in range(n)]
    for i in range(n):
        mitosis(array, c1,c2,r1)
        r1 +=1
    print(2)  
    for i in range(n):
        for j in range(n):
            print(array[i][j], end=" ")
        print()
    x = int(input())
    if x == -1:
        exit()        