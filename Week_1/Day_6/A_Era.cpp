#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > (i + 1))
            {
                int x = v[i] - (i + 1);
                ans = max(ans, x);
            }
        }
        cout << ans << endl;
    }
}