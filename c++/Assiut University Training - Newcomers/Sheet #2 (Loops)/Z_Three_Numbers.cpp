#include <iostream>
using namespace std;

int main()
{
    int k, s, counter;
    cin >> k >> s;

    counter = 0;

    for(int x = 0; x <= k; x++)
    {
        for(int i = 0; i <= k; i++)
        {
            if(s - x - i >= 0 && s - x - i <= k)
            {
                counter ++;
            }
        }
    }

    cout << counter;
    return 0;
}
