#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, last_2_digits; 
    cin >> a >> b >> c >> d;

    a = a % 100;    
    b = b % 100;
    c = c % 100;
    d = d % 100;

    last_2_digits = ( a * b * c * d) % 100;

    cout.width(2);
    cout.fill('0');
    cout << last_2_digits;
    return 0;
}