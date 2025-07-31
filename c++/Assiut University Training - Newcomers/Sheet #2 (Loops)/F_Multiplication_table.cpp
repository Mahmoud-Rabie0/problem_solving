#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int x = 1; x <= 12; x++)
    {
        cout << n << " * " << x << " = " << n * x << "\n";
    }
    return 0;
}
