#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    ll primeLimit = 1e6 + 1;
    vector<bool> prime(primeLimit, true);
    for (ll i = 2; i * i < primeLimit; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j < primeLimit; j += i)
            {
                prime[j] = false;
            }
        }
    }
    set<ll> tPrime;
    for (ll i = 2; i < primeLimit; i++)
    {
        if (prime[i])
            tPrime.insert(i * i);
    }
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (tPrime.find(x) != tPrime.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    solve();
}