#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	vector <int> res;
	int a=INT_MIN ,b=INT_MIN;
	for(auto x = array.begin(); x<array.end(); ++x){
		for(auto y = x+1; y<array.end();++y){
			if(*x + *y == targetSum){
				a = *x;
				b = *y;
			}
				
		}
	}
	if(a==INT_MIN&&b==INT_MIN)
		return {};
	else
		return {a,b};
}
