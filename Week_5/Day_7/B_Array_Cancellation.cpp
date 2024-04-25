#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    ll a[n];
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
        if (s < 0)
            s = 0;
    }

    cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}