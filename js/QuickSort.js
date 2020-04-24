function quickSort(array) {
  // Write your code here.
	quicksortHelper(array, 0, array.length - 1);
	return array;
}
function swap(array, i,j){
	let temp = array[i];
	array[i]=array[j];
	array[j]=temp;
}
function quicksortHelper(array, start,end){
	if(start>=end){
		return;
	}
	let pivot = start;
	let left = start + 1;
	let right = end;
	while(left<=right){
		if(array[left]>array[pivot] && array[right]<array[pivot]){
			swap(array, left,right);
		}
		if(array[left]<=array[pivot]){
			left = left + 1;
		}
		if(array[right]>=array[pivot]){
			right = right - 1;
		}
		
	}
	swap(array, pivot, right);
	if(right-1-start<end-right-1){
		quicksortHelper(array, start, right - 1);
		quicksortHelper(array, right + 1, end);
	}else{
		quicksortHelper(array, right + 1, end);
			quicksortHelper(array, start, right - 1);
	}
}

// Do not edit the line below.
exports.quickSort = quickSort;
