#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned long long a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << ( b * log(a) > d * log(c) ? "YES" : "NO");
    return 0;
}