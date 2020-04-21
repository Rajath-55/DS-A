class Program {
  public static int[] selectionSort(int[] array) {
		int min;
		int index = 0;
		boolean swap = false;
    for(int i = 0;i<array.length;i++){
			min = array[i];
			int j=i+1;			
			while(j<array.length){
				if(min > array[j]){
				min = array[j];
				index = j;
				swap = true;
				}
				j++;							
			}
			if(swap){
				int temp = array[i];
				array[i] = min;
				array[index] = temp;	
			}
			swap = false;
			}   
		return array;
  }		
}
