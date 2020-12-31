def bubbleSort(array):
    # Write your code here.
	for i in range (len(array)):
		for j in range(i+1, len(array)):
			if array[i] > array[j]:
				temp = array[i]
				array[i]=array[j]
				array[j]=temp
	return array			
    pass
n = int(input())
arr = list(map(int, input().strip().split()))
arr1 = bubbleSort(arr)
for i in arr1:
	print(arr1, end = " ")
