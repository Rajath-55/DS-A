def caesarCipherEncryptor(string, key):
    # Write your code here.
	newletters = []
	key = key%26
	for  i in range(len(string)):
		code = ord(string[i]) + key
		if code >122:
			code = 96 + code%122;
		newletters.append(chr(code))	
	return "".join(newletters)	
    pass
