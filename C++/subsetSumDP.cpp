void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> h = inp(n);

    ll dp[n + 1][k + 1], mini[n + 1][k + 1];
    ll count = 0;
    for (auto x : h)
    {
        if (x >= k)
            count++;
    }
    if (count >= 2)
    {
        cout << 2 << endl;
        return;
    }
    k = k * 2;
    for (ll j = 0; j <= k; ++j)
    {
        if (h[0] <= j)
        {
            dp[0][j] = h[0];
            mini[0][j] = 1;
        }
    }
    for (ll i = 1; i < n; ++i)
    {
        for (ll j = 0; j <= k; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            mini[i][j] = mini[i - 1][j];
            if (h[i] <= j)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - h[i]] + h[i]);
                if (dp[i - 1][j] == dp[i - 1][j - h[i]] + h[i])
                {
                    mini[i][j] = min(mini[i][j], mini[i - 1][j - h[i]] + 1);
                }
                else if (dp[i - 1][j] < dp[i - 1][j - h[i]] + h[i])
                {
                    mini[i][j] = mini[i - 1][j - h[i]] + 1;
                }
            }
        }
    }
    cout << (dp[n - 1][k] >= k ? mini[n - 1][k] : -1) << endl;
}