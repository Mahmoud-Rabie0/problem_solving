#include <iostream>
using namespace std;

int main()
{
    int n, m, x, y, sum;

    while(cin >> n >> m && n > 0 && m > 0)
    {
        sum = 0;

        if(n > m)
        {
            x = m;
            y = n;
        }
        else
        {
            x = n;
            y = m;
        }

        for(; x <= y; x++)
        {
            cout << x << " ";
            sum += x;
        }

        cout << "sum =" << sum << "\n";
    }
    return 0;
}
