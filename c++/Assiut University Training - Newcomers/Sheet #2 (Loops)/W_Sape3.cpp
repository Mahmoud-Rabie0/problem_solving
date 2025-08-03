#include <iostream>
using namespace std;

int main()
{
    short n;
    cin >> n;

    for(short i = 0; i < n; i++)
    {
        for(short s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }

        for(short x = 0; x < i * 2 + 1; x++)
        {
            cout << '*';
        }
        cout << '\n';
    }

    for(short i = n; i > 0; i--)
    {
        for(short s = 0; s < n - i; s++)
        {
            cout << " ";
        }

        for(short x = 0; x < i * 2 - 1; x++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
