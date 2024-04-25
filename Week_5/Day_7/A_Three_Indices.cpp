    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int

    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool found = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                found = true;
                cout << "Yes\n";
                cout << i << " " << i + 1 << " " << i + 2 << "\n";
                break;
            }
        }

        if (!found)
        {
            cout << "No\n";
        }
    }

    int main()
    {
        int t;
        cin >> t;
        while (t--)
            solve();
        return 0;
    }
