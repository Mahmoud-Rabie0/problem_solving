#include <iostream>
using namespace std;

int main()
{
    unsigned a, b;
    cin >> a >> b;

    if(a > b)
    {
        if(a - b == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else if(a < b)
    {
        if(b - a == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        if(a != 0 && b != 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
