#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;

    a = n % 10;
    b = n / 10;

    if(a % b == 0 or b % a == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
