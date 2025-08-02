#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;

        if(n == 0)
        {
            cout << "0\n";
            continue;
        }


        while(n)
        {
            cout << n % 10 << " ";
            n /= 10;
        }
        cout << "\n";
    }
    return 0;
}
