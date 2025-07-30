#include <iostream>
using namespace std;

int main()
{
    int x;
    while(cin >> x && x != 1999)
    {
        cout << "Wrong\n";
    }
    cout << "Correct\n";
    return 0;
}
