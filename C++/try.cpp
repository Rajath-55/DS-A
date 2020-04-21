#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s[9];
        for(int i=0;i<9;++i){
          cin>>s[i];
        }
        for(int i=0;i<9;++i){
          for(int j=0;j<s[i].length();++j){
            if(s[i][j]=='1')
            s[i][j]='2';
          }
        }
        for(int i=0;i<9;++i){
          cout<<s[i]<<endl;
        }
}
}