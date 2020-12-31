class Program {
  public static int binarySearch(int[] array, int target) {
    // Write your code here.
		int low = 0;
		int high = array.length - 1;
		while(low<=high){
			int mid = (low+high)/2;
			if(target==array[mid]){
				return mid;
			}
			if(target<array[mid]){
				high = mid -1;
			}
			if(array[mid]<target){
				low = mid + 1;
			}
		}
    return -1;
  }
}
