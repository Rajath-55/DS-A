#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long ll;
typedef long int l;
int main()
{
    fastio();
    int t;
    cin >> t;
    l n;
    while (t--)
    {
        cin >> n;
        l a[n];
        vector<l> b;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if ((a[i] / 2) % 2 != 0 && a[i] % 2 == 0)
                b.push_back(i);
        }
        int pos1, pos2;
        for (auto x = b.begin(); x < b.end(); ++x)
        {
            if (x != b.end() - 1)
            {
                pos1 = *x;
                pos2 = *(x + 1);
                for (int x = pos1; x < pos2; x++)
                {
                    if (a[x] % 2 == 0)
                    {
                    }
                }
            }
        }
    }
}