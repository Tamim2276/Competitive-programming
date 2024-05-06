#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // vector<int> bob;
    int bob = bob = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int ans1 = -1, ans2 = -1;
        if (i > 0)
            ans1 = abs(v[i - 1] - v[i]);
        if (i < n - 1)
            ans2 = abs(v[i] - v[i + 1]);
        int ans = max(ans1, ans2);
        // bob.push_back(ans);
        bob = min(bob, ans);
    }
    // sort(bob.begin(), bob.end());
    // cout << bob[0] << endl;
    cout << bob << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}