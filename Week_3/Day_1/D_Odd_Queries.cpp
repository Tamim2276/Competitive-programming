#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> prefixSum(vector<ll> arr)
{
    int n = arr.size();
    vector<ll> prefix(n);
    for (ll i = 0; i < arr.size(); i++)
    {
        prefix[0] = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }
    }
    return prefix;
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        l--;
        r--;
        ll sum = 0;
        vector<ll> oldTotalSum = prefixSum(arr);
        ll newTotalSum = oldTotalSum[l - 1] + ((r - l + 1) * k) + (oldTotalSum[n] - oldTotalSum[r]);
        if (newTotalSum % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}