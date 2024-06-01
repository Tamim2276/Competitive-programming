#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {

        cin >> v[i];
    }
    vector<int> diff(n + 2);
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        diff[l] += x;
        diff[r + 1] -= x;
    }
    // for (int i = 0; i <= n + 1; i++)
    //     cout << diff[i] << " ";
    for (int i = 1; i <= n; i++)
    {
        diff[i] = diff[i - 1] + diff[i];
    }
    // for (int i = 0; i <= n + 1; i++)
    //     cout << diff[i] << " ";
    for (int i = 1; i <= n; i++)
        cout << v[i] + diff[i] << " ";
}
