#include <iostream>
using namespace std;

int main(){
    float a, b, result, floor, ceil, round;
    cin >> a >> b;
    
    result = a / b;

    //floor
    floor = (int)result;

    //ceil
    ceil = (result != (int)result) ? (int)result + 1 : result;

    //round
    round = (result - (int)result >= 0.5) ? (int)result + 1 : (int)result;

    cout << "floor " << a << " / " << b << " = " << floor << "\n";
    cout << "ceil " << a << " / " << b << " = " << ceil << "\n";
    cout << "round " << a << " / " << b << " = " << round << "\n";
    return 0;
}