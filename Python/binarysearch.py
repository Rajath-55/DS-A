def binarySearch(array, target):
    # Write your code here.
	n = len(array)
	low = 0
	high = n-1
	while low<=high:
		mid = int((low + high)/2)
		if array[mid]==target:
			return mid
		if target<array[mid]:
			high = mid -1
		if array[mid]<target:
			low = mid + 1
	return -1		
    pass
