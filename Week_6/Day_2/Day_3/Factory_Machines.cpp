#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](ll mid)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (mid / v[i]);
            if (total >= t)
                return true;
        }
        return false;
    };
    ll low = 1, high = 1e18, ans = -1;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (ok(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans << endl;
}
int main()
{
    solve();
}