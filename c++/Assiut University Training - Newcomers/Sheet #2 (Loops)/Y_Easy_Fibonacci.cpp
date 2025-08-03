#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, z;
    cin >> n;

    //cout << a << " " << b << " ";
    for(int i = 1; i <= n; i++)
    {
        if(i == 1 || i == 2)
        {
            cout << i - 1 << " ";
        }
        else
        {
            z = a + b;
            cout << z << " ";
            a = b;
            b = z;
        }
    }
    return 0;
}
