using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
  // Write your code here.
	if(array.size()==0)
		return {};
	// int rowsize = array.size()-1;
	// int colsize = array[0].size - 1;
	vector<int>result ={};
	int rowstart = 0;
	int colstart = 0;
	int rowend = array.size()-1;
	int colend = array[0].size()-1;
	while(rowstart<=rowend&&colstart<=colend){
		for(int i = colstart;i<=colend;++i){
			result.push_back(array[rowstart][i]);
		}
		for(int i=rowstart +1; i<=rowend;++i){
			result.push_back(array[i][colend]);
		}
		for(int i=colend-1;i>=colstart;--i){
			if(rowstart==rowend)
				break;
			result.push_back(array[rowend][i]);
		}
		for(int i=rowend -1;i>rowstart;--i){
			if(colstart==colend)
				break;
			result.push_back(array[i][colstart]);
		}
		colstart++;
		rowend--;
		rowstart++;
		colend--;
	}
  return result;
}
