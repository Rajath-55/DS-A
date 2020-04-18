#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
  int   countz = 0, countone = 0,countalt=0;
    for (int i=0;i<n;++i){
        if(s[i]=='0')
        countz++;
        else 
        countone++;
    }
    cout<<abs(countz-countone)<<endl;
    
}   