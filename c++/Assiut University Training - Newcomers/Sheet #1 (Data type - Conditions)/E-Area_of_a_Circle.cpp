#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const double PI = 3.141592653;
    double r, area;
    cin >> r;

    area = PI * (r * r);

    cout << fixed << setprecision(9);
    cout << area << "\n";
    return 0;
}