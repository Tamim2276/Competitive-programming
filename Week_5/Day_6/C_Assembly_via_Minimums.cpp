#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int m = (n * n - n) / 2;
    vector<int> a(n), b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int x = 1, idx = 0;
    int idxFromB = n - x;
    while (n - x > 0)
    {
        a[idx++] = b[idxFromB - 1];
        x++;
        idxFromB += n - x;
    }
    a[n - 1] = 1000000000;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}