def moveElementToEnd(array, toMove):
    # Write your code here.
	i=0
	swapper = len(array)-1
	while i<swapper:
		while i<swapper and array[swapper]==toMove:
			swapper -=1
		if array[i]==toMove:
			array[i] , array[swapper] = array[swapper], array[i]
		i +=1	
    return array







