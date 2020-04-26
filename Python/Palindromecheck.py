def isPalindrome(string):
    # Write your code here.
	reversedstring=""
	for i in reversed(range(len(string))):
		reversedstring +=string[i]
		
	return reversedstring==string	
	