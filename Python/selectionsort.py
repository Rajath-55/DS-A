def selectionSort(array):
    # Write your code here.
	currindex = 0
	while currindex < len(array)-1:
		minindex = currindex
		for i in range(currindex + 1, len(array)):
			if array[minindex]>array[i]:
				minindex = i
		swap(currindex, minindex, array)	
		currindex +=1
    
    return array

def swap(i,j,array):
	array[i], array[j]=array[j],array[i]