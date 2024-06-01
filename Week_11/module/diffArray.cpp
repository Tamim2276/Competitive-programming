#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> diffArray;
    for (int i = 1; i <= n; i++)
    {
        diffArray.push_back(v[i] - v[i - 1]);
    }
    for (auto val : diffArray)
        cout << val << " ";
}
