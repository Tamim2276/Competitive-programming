#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](ll mid)
    {
        ll water = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid >= v[i])
                water += mid - v[i];
            else
                water += 0;
        }
        if (water > x)
            return false;
        return true;
    };

    ll low = 0, high = 2e9 + 9, ans = -1;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (ok(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
