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
    bool ok = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        int cnt = 0;
        if (v[n - 1] > v[0])
            cout << "No" << endl;
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (v[i] < v[i - 1])
                    cnt++;
            }
            if (cnt > 1)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}