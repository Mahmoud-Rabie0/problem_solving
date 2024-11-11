#include <iostream>
using namespace std;

int main(){
    long long x, y, sum, mul, sub;
    cin >> x >> y;

    sum = x + y;
    mul = x * y;
    sub = x - y;
    
    cout << x << " + " << y << " = " << sum << "\n";
    cout << x << " * " << y << " = " << mul << "\n";
    cout << x << " - " << y << " = " << sub;
    return 0;
}