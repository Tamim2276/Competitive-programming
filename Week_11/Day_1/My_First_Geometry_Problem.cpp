#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    string s;
    cin >> s;
    bool rightX = true, leftX = true, upX = true, upY = true;
    if (s[0] == '0')
        leftX = false;
    if (s[1] == '0')
        rightX = false;
    if (s[2] == '0')
        upX = false;
    if (s[3] == '0')
        upY = false;
    ll ans1 = 0, ans2 = 0;
    if (rightX && leftX)
        ans1 = 21;
    else if (leftX || rightX)
        ans1 = 11;
    if (upX && upY)
        ans2 = 21;
    else if (upX || upY)
        ans2 = 11;
    if (ans1 == 0 && ans2 == 0)
    {
        cout << 1 << endl;
        return;
    }
    else if (ans1 == 0)
    {
        cout << ans2 << endl;
        return;
    }
    else if (ans2 == 0)
    {
        cout << ans1 << endl;
        return;
    }
    else
    {
        cout << ans1 * ans2 << endl;
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}