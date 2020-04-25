def isMonotonic(array):
    # Write your code here.
	increase = True
	decrease = True
	for i in range(1, len(array)):
		if array[i]<array[i-1] : decrease = False
		if array[i]>array[i-1] : increase = False
	return increase or decrease		
    pass
