#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> watched(n + 1, false);

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        watched[x] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!watched[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
