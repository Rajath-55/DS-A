using namespace std;

bool isMonotonic(vector<int> array) {
  // Write your code here.
	bool increase = true;
	bool decrease = true;
	for(int i=1;i<array.size();++i){
		if(array[i]<array[i-1])
			decrease = false;
		if(array[i]>array[i-1])
			increase = false;
	}
  return increase||decrease;
}
