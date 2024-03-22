#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x >> s;
        for (char z : s)
        {
            if (z == 'D')
            {
                a[i]++;
                if (a[i] == 10)
                    a[i] = 0;
            }
            else
            {
                a[i]--;
                if (a[i] == -1)
                    a[i] = 9;
            }
        }
    }
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
    return 0;
}
