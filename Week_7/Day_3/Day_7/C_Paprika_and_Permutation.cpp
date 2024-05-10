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
    vector<bool> vis(n + 1, false);
    vector<int> canChange;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= n)
        {
            if (vis[v[i]] == false)
                vis[v[i]] = true;
            else
                canChange.push_back(v[i]);
        }
        else
            canChange.push_back(v[i]);
    }
    vector<int> needValue;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
            needValue.push_back(i); // sorted
    }
    sort(canChange.begin(), canChange.end());
    // if 2*needValue >= canChange then can not make the permutation
    bool flag = true;
    for (int i = 0; i < canChange.size(); i++)
    {
        if (2 * needValue[i] >= canChange[i])
        {
            flag = false;
            break;
        }
    }
    // if flag is true we need canChange.size() amount of move to make the array
    if (flag)
        cout << canChange.size() << endl;
    else
        cout << -1 << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}