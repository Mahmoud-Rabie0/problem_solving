#include <iostream>
using namespace std;

int main()
{
    short n;
    cin >> n;

    for(short x = n; x > 0; x--)
    {
        for(short y = 0; y < x; y++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
