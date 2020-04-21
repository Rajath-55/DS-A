n = int(input())
arr = list(map(int, input().strip().split(' ')))
maxele = arr[0]
minele =arr[0]
posmax = 0
posmin = 0
for i in range(len(arr)):
    if arr[i]>maxele:
        maxele = arr[i]
        posmax = i
    if arr[i]<=minele:
        minele=arr[i]
        posmin=i
print(posmax,posmin)        
print(posmax+(len(arr)-1-posmin))        