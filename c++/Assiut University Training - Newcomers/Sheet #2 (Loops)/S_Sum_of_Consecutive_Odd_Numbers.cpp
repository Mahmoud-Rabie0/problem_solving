#include <iostream>
using namespace std;

int main()
{
    int t, x, y, sum, temp;
    cin >> t;

    while(t--)
    {
        cin >> x >> y;
        sum = 0;
        if(x > y)
        {
            temp = y;
            y = x;
            x = temp;
        }

        for(int i = x + 1; i < y; i++)
        {
            if(i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
