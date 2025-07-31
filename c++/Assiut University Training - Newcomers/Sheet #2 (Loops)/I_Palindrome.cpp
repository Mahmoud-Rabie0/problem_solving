#include <iostream>
using namespace std;

int main()
{
    int n, reversed = 0, x;
    cin >> n;
    x = n;

    if(x < 10)
    {
        cout << x << "\nNO";
        return 0;
    }
    while(x)
    {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }

    cout << reversed << (n == reversed ? "\nYES" : "\nNO");
    return 0;
}
