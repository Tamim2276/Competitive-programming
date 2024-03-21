#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string x, s;
        cin >> x >> s;
        s += s;
        bool found = false;
        int cnt = 0, ans = 0;

        if (x[0] == 'g')
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == x[0] && !found)
                {
                    found = true;
                    cnt = 0;
                }
                if (found)
                    cnt++;
                if (s[i] == 'g')
                {
                    found = false;
                    ans = max(ans, cnt);
                }
            }

            cout << ans - 1 << endl;
        }
    }
}