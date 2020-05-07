#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
// typedef long long ll;
// typedef long int l;
unsigned long int nextpowerof2(unsigned long int n)
{
    unsigned long int next = pow(2, ceil(log(n) / log(2)));
    return next;
}
unsigned long int pow2(unsigned long int r)
{
    long int res = (int)log2(r);
    return (int)pow(2, res);
}
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long int x, y, l, r;
        cin >> x >> y >> l >> r;
        long int res;

        unsigned long int prev = pow2(r + 1) - 1;
        unsigned long long int m, z, k, w,p,o,u,v;

        unsigned long int next;
        if (nextpowerof2(l) == l)
        {
            next = 2 * nextpowerof2(l) - 1;
        }
        else
        {
            next = nextpowerof2(l) - 1;
        }

        bool ifprev = false, ifnext = false;
        if (prev <= r && prev >= l)
            ifprev = true;
        if (next >= l && next <= r)
            ifnext = true;
        m = (x & prev) * (y & prev);
        z = (x & next) * (y & next);
        k = (l & x) * (l & y);
        w = (r & x * r & y);
    

        

        return (0);
    }