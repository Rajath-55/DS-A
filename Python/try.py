n = int(input())
counts = {}
arr = list(map(int, input().strip().split()))

for i in arr:
    counts[i] = counts.get(i,0)+ 1
maxi = -1
for k,v in counts.items():
    maxi = max(maxi, counts[k])
print(maxi, len(counts))


