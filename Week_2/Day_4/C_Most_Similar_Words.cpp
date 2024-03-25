#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int ans = INT_MAX;
    int sum;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += abs(s[i][k] - s[j][k]);
            }
            if (ans > sum)
                ans = sum;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}