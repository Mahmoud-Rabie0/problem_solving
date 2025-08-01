#include <iostream>
using namespace std;

int main()
{
    char s;
    int n, x;
    cin >> s;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        while(x)
        {
            cout << s;
            x--;
        }
        cout << "\n";
    }
    return 0;
}
