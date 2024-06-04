#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    int sum = 0, active_intervals = 0;
    for (auto [idx, val] : mp)
    {
        active_intervals += val;
        sum = max(sum, active_intervals);
    }

    cout << sum << endl;
}
int main()
{
    solve();
}
