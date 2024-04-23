#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll mn = INT_MAX;
        ll cnt = 0;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
            if (v[i] < 0)
            {
                cnt++;
            }

            mn = min(mn, abs(v[i]));
        }

        if (mn == 0 || cnt % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * mn << endl;
        }
    }
}