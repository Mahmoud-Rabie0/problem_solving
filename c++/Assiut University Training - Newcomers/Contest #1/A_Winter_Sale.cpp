#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, p;
    double priceAfterdiscount;

    cin >> x >> p;
    priceAfterdiscount = p / (1 - (x / 100.0));

    cout << fixed << setprecision(2);
    cout << priceAfterdiscount;
    return 0;
}
