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
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        for (int j = l; j <= r; j++)
        {
            v[j] += x;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
}
