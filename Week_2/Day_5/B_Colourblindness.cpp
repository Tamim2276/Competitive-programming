#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    bool same = true;
    int i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
        {
            if ((s1[i] == 'G' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'G'))
            {
                same = true;
            }
            else
            {
                same = false;
                break;
            }
        }
        i++;
    }
    if (same)
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