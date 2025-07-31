#include <iostream>
using namespace std;

int main()
{
    int a, b , range, common = 0;
    cin >> a >> b;
    range = (a > b)? b : a;

    for(int x = 1; x <= range; x++)
    {
        if(a % x == 0 && b % x == 0)
            common = x;
    }

    cout << common;
    return 0;
}
