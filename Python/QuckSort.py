def swap(i,j,array):
	array[i], array[j] = array[j],array[i]
	
def quickSort(array):
    # Write your code here.
	quicksortHelper(array, 0 ,len(array)-1)
	return array

def quicksortHelper(array, startidx, endidx):
	if startidx >=endidx:
		return
	pivotidx = startidx
	leftidx = startidx +1 
	rightidx = endidx
	while rightidx >= leftidx:
		if array[leftidx]>array[pivotidx] and array[rightidx]<array[pivotidx]:
			swap(leftidx, rightidx, array)
		if array[leftidx]<=array[pivotidx]:
			leftidx +=1
		if array[rightidx]>=array[pivotidx]:
			rightidx -=1
	swap(pivotidx, rightidx, array)
	left_small = rightidx - 1 - startidx < endidx - (rightidx + 1)
	if left_small:
		quicksortHelper(array, startidx, rightidx-1)
		quicksortHelper(array, rightidx + 1, endidx)
	else:
		quicksortHelper(array, rightidx + 1, endidx)
		quicksortHelper(array, startidx, rightidx - 1)
	
