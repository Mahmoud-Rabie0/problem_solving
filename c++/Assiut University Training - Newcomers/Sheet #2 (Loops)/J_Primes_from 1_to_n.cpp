#include <iostream>
using namespace std;

int main()
{
    int n;
    int prime;
    cin >> n;

    cout << "2 ";
    for(int x = 3; x <= n; x++)
    {
        prime = true;
        for(int y = 2; y < x; y++)
        {
            if(x % y == 0)
            {
                prime = false;
                y = x;
            }
        }
        if(prime) {
            cout << x << " ";
        }
    }
    return 0;
}
