#include <iostream>
using namespace std;

int main(){
    short x, first_digit;
    cin >> x;
    
    while(x >= 10){
        first_digit = x / 10;
    }
    
    cout << (first_digit % 2 == 0 ? "EVEN" : "ODD");
    return 0;
}