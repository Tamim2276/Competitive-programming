#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if ((n / i) != i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    if (k > divisors.size())
        cout << -1 << endl;
    else
        cout << divisors[k - 1] << endl;
}
int main()
{
    solve();
}