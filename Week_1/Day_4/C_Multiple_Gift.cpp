#include <iostream>

using namespace std;

int main()
{
    long long int X, Y;
    cin >> X >> Y;

    long long int count = 1;
    long long int curr = X;

    while (curr * 2 <= Y)
    {
        curr *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
}
