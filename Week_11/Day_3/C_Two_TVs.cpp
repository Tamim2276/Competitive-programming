#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(int n)
{
    map<int, int> d;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    int sum = 0;
    bool ok = true;
    for (auto [idx, value] : d)
    {
        sum += value;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}