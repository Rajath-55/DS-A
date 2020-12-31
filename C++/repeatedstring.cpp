#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
void repeatedString(string s, long n) {
     long count =0;
     long length = s.length();
     cout<<length<<endl;
     string s1=s;
     for(long i=0;i<=(n/s.length());++i){
         s +=s1;
     }
     for(int i=0;i<n%length;++i){
          s +=s1[i];
     }

     
     for(long i=0;i<s.length();++i){
         if(s[i]=='a')
         count++;
     }
     cout<<s;
    //  return count;


}
int main(){
  int n; 
  string s;
  cin>>n;
  cin>>s;

  // int res = repeatedString(s,n);
  // cout<<s<<endl;
  // cout<<res<<endl
  repeatedString(s,n);
}