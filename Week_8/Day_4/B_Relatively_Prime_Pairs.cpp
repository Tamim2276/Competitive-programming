#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll i = 1;
    ll a = 1;
    vector<ll> even, odd;
    for (ll i = l; i <= r; i++)
    {
        if (i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }
    // for (ll i = 0; i < even.size(); i++)
    //     cout << even[i] << " ";
    // cout << endl;
    // for (ll i = 0; i < odd.size(); i++)
    //     cout << odd[i] << " ";
    cout << "YES" << endl;
    for (ll i = 0; i < even.size(); i++)
    {
        cout << even[i] << " " << odd[i] << endl;
    }
}
int main()
{
    solve();
}