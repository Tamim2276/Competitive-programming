#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define Yes "Yes"
#define No "No"
#define endl "\n"
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    if (v[0] == 1)
    {
        cout << Yes << endl;
        return;
    }
    ll idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % v[0] != 0)
        {
            idx = i;
            break;
        }
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % v[0] == 0 || v[i] % v[idx] == 0)
            cnt++;
        else
        {
            cout << No << endl;
            return;
        }
    }
    cout << Yes << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}