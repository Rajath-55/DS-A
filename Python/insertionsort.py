def insertionSort(array):
    # Write your code here.
	for i in range(1,len(array)):
		j = i;
		while j>0 and array[j]<array[j-1]:
			swap(j,j-1,array)
			j -=1
	return array		
    pass
def swap(index1, index2, array):
	array[index2], array[index1] = array[index1], array[index2]
	