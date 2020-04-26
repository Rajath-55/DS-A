import java.util.*;

class Program {
  public static List<Integer> moveElementToEnd(List<Integer> array, int toMove) {
    int last = array.size() - 1;
		for(int i = 0;i<array.size();i++){
			if(array.get(i) == toMove){
				while(last > i && array.get(last) == toMove){
					last--;
				}
				int temp = array.get(i);
				array.set(i,array.get(last));
				array.set(last,temp);
			} 
		}
    return array;
  }
}
