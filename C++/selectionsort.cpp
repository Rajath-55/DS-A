#include <vector>
using namespace std;
vector<int> selectionSort(vector<int> array) {
  // Write your code here.
	int currindex= 0;
	while(currindex < array.size() -1){
		int minindex = currindex;
		for(int k=currindex +1;k<array.size();++k){
			if(array[minindex]>array[k]){
				int temp = array[minindex];
				array[minindex] = array[k];
				array[k] = temp;
				
			}
		}
		currindex++;
	}
	
	
	
  return {array};
}
