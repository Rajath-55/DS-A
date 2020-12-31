n= int(input())
s = str(input())
s = s.lower()
flag=0
st = 'abcdefghijklmnopqrstuvwxyz'
counts = dict()
a = 'a'
for i in range(1,27):
    counts[a]=0
    a = chr(ord(a)+1)
for i in range(len(s)):
    for j in range (len(st)):
        if s[i]==st[j]:
            counts[s[i]]=counts.get(s[i], 0) + 1;
print(counts)            
for i in counts.values():
    if i==0:
        flag=1
        break
if flag:
    print("NO")
    
else:
    print("YES")