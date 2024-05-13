#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k;
    cin >> k;
    if (k % 2 == 0)
    {
        ll ans = k / 2;
        cout << ans << endl;
        for (ll i = 0; i < k / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        ll ans = k - 3;
        cout << (ans / 2) + 1 << endl;
        for (ll i = 0; i < ans / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
}