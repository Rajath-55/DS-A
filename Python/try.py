arr = list(map(int, input().strip().split()))
counts = dict()
count =0
for i in arr:
    counts[i]=counts.get(i,0) + 1
for i in counts.values():
    if i>1:
        count = count + i-1
print(count)        