#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> diff(n + 1);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        diff[l]++;
        diff[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        diff[i] = diff[i - 1] + diff[i];
    }
    sort(diff.begin(), diff.end(), greater<int>());
    sort(v.begin(), v.end(), greater<int>());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * diff[i] * v[i]);
    }
    cout << ans << endl;
}
int main()
{
    solve();
}