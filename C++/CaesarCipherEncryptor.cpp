#include<vector>
#include<string>
#include<numeric>
using namespace std;

string caesarCypherEncryptor(string str, int key) {
  // Write your code here.
	key%=26;
	vector<char>result;
	for(int i=0;i<str.length();++i){
		int newcode = str[i] + key;
		newcode = newcode<=122 ? newcode : 96 +newcode%122;
		result.push_back(newcode);
	}
	return string(result.begin(), result.end());
}
