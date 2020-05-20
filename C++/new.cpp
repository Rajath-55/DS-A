#include <bits/stdc++.h>

using namespace std;
void swapper(int *arr, int i, int j, int k){
    int tempi = *(arr+i);
    int tempj = *(arr+j);
    int tempk = *(arr+k);
    *(arr+j)=tempi;
    *(arr+k)=tempj;
    *(arr+i)=tempk;
    return;
}

int main() {
	int arr[5]={1,2,3,4,5};
    swapper(arr, 1,2,3);
    for(int i=0;i<5;++i){
        cout<<arr[i]<<" ";
    }
 }