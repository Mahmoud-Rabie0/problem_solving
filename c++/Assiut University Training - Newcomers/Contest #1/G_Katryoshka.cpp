#include <iostream>
using namespace std;

int main()
{
    long long e, m, b;
    cin >> e >> m >> b;

    if(e > 0 && b > 0)
    {
        if(e >= 2 && b >= 1 && m == 0)
        {
            e /= 2;
            cout << min(e, b);
        }
        else if(m < e && m < b)
        {
            e -= m;
            b -= m;
            cout << m + min(e / 2, b);
        }
        else if((e > m || b > m) || m > e && m > b)
        {
            cout << min(e, b);
        }
        else
        {
            cout << e;
        }
    }
    else
    {
        cout << 0;
    }

    return 0;
}
