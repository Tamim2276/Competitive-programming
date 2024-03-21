#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int l = 0;
    int r = 0;
    while (l < n || r < m)
    {
        if (r == m || (l < n && v1[l] <= v2[r]))
        {
            cout << v1[l] << " ";
            l++;
        }
        else
        {
            cout << v2[r] << " ";
            r++;
        }
    }
}
