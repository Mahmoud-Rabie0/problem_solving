#include <iostream>
using namespace std;

int main()
{
    int range, n;
    int max = 0;
    cin >> range;

    for(int i = 0; i < range; i++)
    {
        cin >> n;
        if(n > max) max = n;
    }
    cout << max;
    return 0;
}
