class Program {
  public static int[] bubbleSort(int[] array) {
    // Write your code here.
		for(int i=0;i<array.length;++i){
		for(int j = i+1;j<array.length;++j){
			if(array[i]>array[j]){
				int temp = array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
  return array;
    
  }
}
