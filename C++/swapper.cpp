#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  // Write your code here.
	int swapper=array.size()-1;
	int i=0;
	while(i<swapper){
	
		while(i<swapper&&array[swapper]==toMove){
			swapper--;
		}
			if(array[i]==toMove)
				swap(array[i],array[swapper]);
			i++;
		
	}

	
  return {array};
}
