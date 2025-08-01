#include <iostream>
using namespace std;

int main()
{
    short n;
    cin >> n;

    for(short x = 0; x < n; x++)
    {
        for(short y = 0; y <= x; y++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
