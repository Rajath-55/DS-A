n = int(input())
arr1 = list(map(int, input().strip().split(' ')))
arr2 = list(map(int, input().strip().split(' ')))
arr3 = arr1[1:] + arr2[1:]
flag= 0
counts = dict()
for i in range(1,n+1):
    counts[i]=0
for i in arr3:
    counts[i] = counts.get(i, 0) + 1
for i in counts.values():
    if i == 0:
        flag = 1 

if flag ==1:
    print("Oh, my keyboard! ")
else:
    print("I become the guy.")  