class Program {
  public static boolean isMonotonic(int[] array) {
		Boolean set = false;
		Boolean increasing = false,decreasing = false;
		Boolean notmono = false;
    for(int i = 0;i<array.length - 1;i++){
			int j = i+1;
			if(!set){
			if(array[i]<array[j]){
				set = true;
				increasing = true;
			} else if ( array[i] > array[j]){
				set = true;
				decreasing = true;
			}
			}
			if(set){
				if((increasing == true && array[j] < array[i]) || (decreasing == true && array[j] > array[i])){
					notmono = true;
					break;					
				}
			}
		}
		
    if(notmono){
			return false;
		}else{
			return true;
		}
  }
}
