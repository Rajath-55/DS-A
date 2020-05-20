#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
string caesarCypherEncryptor(string str, int key) {
  // Write your code here.
	key%=26;
    key=26-key+1;
	vector<char>result;
	for(int i=0;i<str.length();++i){
       
		int newcode = str[i] + key;
		newcode = newcode<=122 ? newcode : 96 +newcode%122;
		result.push_back(newcode);
       
	}
	return string(result.begin(), result.end());
}

int main()
{
    // fastio();
    string s1,s2;
    getline(cin, s1);
    for(int i=0;i<=4;++i){
    s2=caesarCypherEncryptor(s1,i);
    for(int i=0;i<s2.length();++i){
        if(s2[i]<97 || s2[i]>122){
            s2[i]=' ';
        }
    }
    cout<<i<<" "<<s2<<endl;
    }
    }

    // 8 12 4