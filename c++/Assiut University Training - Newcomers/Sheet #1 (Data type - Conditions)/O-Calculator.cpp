#include <iostream>
using namespace std;

int main(){
    long long a, b;
    char s;
    cin >>a>>s>>b;
    
    switch(s){
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
    }
    return 0;
}