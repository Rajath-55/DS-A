def solve():
    n = int(input())
    s = str(input())
    counts = {}
    flag=1
    for i in range(len(s)):
        counts[s[i]] = counts.get(s[i],0)+1
    # print(counts)
    for k in counts.keys():
        if counts[k]&1:
            flag=0
            break
    if flag:
        print('YES')
    else:
        print('NO')                
     

        

            




t = int(input())
while t!=0:
    t-=1
    solve()
    


