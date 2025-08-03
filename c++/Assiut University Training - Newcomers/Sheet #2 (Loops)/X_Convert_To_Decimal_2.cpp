#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, n, count, decimal;
    cin >> t;

    while(t--)
    {
        cin >> n;


        count = 0;
        while(n)
        {
            count += n % 2;
            n /= 2;
        }

        decimal = 0;
        for(int x = 0; x < count; x++)
        {
            decimal +=  pow(2,x);
        }

        cout << decimal << "\n";
    }
    return 0;
}
