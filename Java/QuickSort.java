class Program {
  public static int[] quickSort(int[] array) {
    // Write your code here.
		quicksortHelper(array, 0 , array.length-1);
		
    return array;
  }
	public static void quicksortHelper(int[] array, int start, int end){
		if (start>=end){
			return ;
		}
		int pivot = start;
		int left = start + 1;
		int right = end;
		while (left<=right){
		if (array[left]>array[pivot] && array[right]<array[pivot]){
			swap(array, left, right );
		}
		if(array[left]<=array[pivot]){
			left++;
		}
		if(array[right]>=array[pivot]){
			right--;
		}
		}
		swap(array, right, pivot);
		
		
		if(right - 1 - start < end - right -1 ){
			quicksortHelper(array, start, right - 1);
			quicksortHelper(array, right + 1 , end);
		}else{
			quicksortHelper(array, right + 1 , end);
			quicksortHelper(array, start, right - 1);
		}
		
	}
	public static void swap(int[] array, int i,int j){
		int temp = array[i];
		array[i]=array[j];
		array[j]=temp; 
	}
}
