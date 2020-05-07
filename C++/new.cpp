#include<bits/stdc++.h>
using namespace std;
unsigned power_ceil(unsigned x) {
    if (x <= 1) return 1;
    int power = 2;
    x--;
    while (x >>= 1) power <<= 1;
    
    if(x&(x-1)==0){
        power*=2;
    }
    return power;
}
int main(){
   unsigned int x;
   unsigned int res=power_ceil(2);
   
   cout<<res<<endl;
}