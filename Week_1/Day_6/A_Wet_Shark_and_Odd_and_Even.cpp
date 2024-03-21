#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0)
        cout << sum;

    else
    {
        sort(v.begin(), v.end());
        for (ll i = 0; i < n; i++)
        {

            sum = sum - v[i];
            if (sum % 2 != 0)
                sum = sum + v[i];
            else
                break;
        }
        cout << sum;
    }
    return 0;
}