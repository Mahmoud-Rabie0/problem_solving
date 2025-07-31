#include <iostream>
using namespace std;

int main()
{
    long long t, n, f;
    cin >> t;

    while(t--)
    {
        cin >> n;
        f = 1;
        for(int x = 2; x <= n; x++)
        {
            f *= x;
        }
        cout << f << "\n";
    }
    return 0;
}
