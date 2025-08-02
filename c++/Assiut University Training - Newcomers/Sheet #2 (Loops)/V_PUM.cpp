#include <iostream>
using namespace std;

int main()
{
    short n, counter = 1;
    cin >> n;

    for(short i = 0; i < n; i++)
    {
        cout << counter << " " << counter + 1 << " " << counter + 2 << " PUM\n";
        counter += 4;
    }
    return 0;
}
