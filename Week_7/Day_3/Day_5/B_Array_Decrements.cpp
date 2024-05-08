#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, a[i] - b[i]);

    for (int i = 0; i < n; i++)
    {
        a[i] = max(0, a[i] - ans);
    }
    if (a == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}