#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
bool sorted = false;
void sortcheck(int *arr1, int*arr2, int n){
    int count =0;
    for(int i=0;i<n;++i){
       if(*(arr1+i)==*(arr2+i)){
           count++;
       }
    }
    if(count==n)
    sorted=true;
    else
    {
        sorted=false;
    }
    
    return;
}
int findpos(int *arr, int k, int n){
    
    for(int i=0;i<n;++i){
        if(*(arr+i)==k)
        return i;
    }
}
void swapper(int *arr, int i, int j, int k){
    int tempi = *(arr+i);
    int tempj = *(arr+j);
    int tempk = *(arr+k);
    *(arr+j)=tempi;
    *(arr+k)=tempj;
    *(arr+i)=tempk;
    return;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    int c[n];
    vector<int>d;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    if (n == 0 || n == 1)
    {
        cout << 0 << endl;
        return;
    }
    sort(b,b+n);
    for (int i = 0; i < 2e5; ++i)
    {
        if (n == 4 * i - 1 || n == 4 * i - 2)
        {
            cout << -1 << endl;
            return;
        }
    }
    int count =0;
    for(int i=0;i<n;++i){
        if(a[i]!=b[i]){
            int pos = findpos(a, b[i], n);
            if (pos!=a[i]-1){
                int p=a[i];
              swapper(a, pos, i, a[i]-1);
              d.push_back(pos+1);
              d.push_back(i+1);
              d.push_back(p);

            }if(pos==a[i]-1){
                int p=a[i]-1;
                swapper(a, pos, i, a[i]-2);
                d.push_back(pos+1);
                d.push_back(i+1);
                d.push_back(p);
            }
        }
        count++;
        sortcheck(a,b,n);
        if(sorted)
        break;
    }
    if(count>k){
        cout<<-1<<endl;
        return;
    }
    cout<<count<<endl;
    
    int m=0;
    for(int i=0;i<d.size();++i){
       cout<<d[i]<<" ";
       m++;
       if(m%3==0){
           cout<<endl;
       }
    }



    return;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    sorted=false;
    return 0;
}
