#include <iostream>
using namespace std;

int main()
{
    int a, b;
    bool lucky = true;
    bool found = false;
    cin >> a >> b;

    for(int x; a <= b; a++)
    {
        x = a;
        while(x)
        {
            if(x % 10 != 4 && x % 10 != 7)
            {
                lucky = false;
                break;
            }

            x /= 10;
            lucky = true;
        }

        if(lucky)
        {
            found = true;
            cout << a << " ";
        }
    }
    if(!found)
    {
        cout << -1;
    }
    return 0;
}
