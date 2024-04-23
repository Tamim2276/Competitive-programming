#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] += (i + 1); // actual cost
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum > c)
        {
            cout << i << endl;
            return;
        }
    }
    cout << n << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}