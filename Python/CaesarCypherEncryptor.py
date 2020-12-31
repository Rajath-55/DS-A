def caesarCipherEncryptor(string, key):
    # Write your code here.
	newletters = []
	key = key%26
	key = 26-key
	for  i in range(len(string)):
		code = ord(string[i]) + key
		if code >122:
			code = 96 + code%122;
		newletters.append(chr(code) if code<123 and code>96 else ' ')	
	return "".join(newletters)	

s = str(input())
counts = dict()
for i in range(len(s)):
	counts[s[i]]=counts.get(s[i], 0) + 1


lst = []
# for i in counts.values():
# 	lst.append(i)
# lst = sorted(lst, reverse=True)
# print(lst)

for k,v in counts.items():
	lst.append(abs((ord(k))-101))

print(lst)
# for i in lst:
# 	res = caesarCipherEncryptor(s, i)
# 	print(res)
# 	count +=1
# 	if count>3:
# 		break


