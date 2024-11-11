#include <iostream>
using namespace std;

int main(){
    short a, b;
    cin >> a >> b;
    
    string msg = (a >= b) ? "Yes" : "No";

    cout << msg;
    return 0;
}