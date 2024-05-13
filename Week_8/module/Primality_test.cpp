#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            return false;
        }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "prime";
    else
        cout << "not prime";
}