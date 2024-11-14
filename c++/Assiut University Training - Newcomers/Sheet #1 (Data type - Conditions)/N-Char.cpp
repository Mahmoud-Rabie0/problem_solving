#include <iostream>
using namespace std;

int main(){
    char x;
    cin >> x;
    
    cout << char((x >= 'A' && x <= 'Z') ? x + 32 : x - 32);
    return 0;
}