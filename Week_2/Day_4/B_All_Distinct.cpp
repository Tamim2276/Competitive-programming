#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int x;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }
    int totalDistinct = freq.size();
    int toBeDel = n - totalDistinct;
    if (toBeDel % 2 != 0)
        totalDistinct--;
    cout << totalDistinct << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}