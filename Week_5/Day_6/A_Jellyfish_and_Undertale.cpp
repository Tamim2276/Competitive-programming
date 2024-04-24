#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    ll total = b;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        total += min(1 + v[i], a) - 1;
    }
    cout << total << endl;
}
int main()
{
    ll
        t;
    cin >> t;
    while (t--)
        solve();
}