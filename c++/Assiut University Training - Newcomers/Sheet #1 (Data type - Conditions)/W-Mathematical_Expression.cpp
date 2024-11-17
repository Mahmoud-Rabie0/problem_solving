#include <iostream>
using namespace std;

int main(){
    short a, b;
    int c, result;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    switch (s)
    {
        case '+':
            result = a + b;
            (result == c) ? cout << "Yes" : cout << result;
            break;
        case '-':
            result = a - b;
            (result == c) ? cout << "Yes" : cout << result;
            break;
        case '*':
            result = a * b;
            (result == c) ? cout << "Yes" : cout << result;
            break;
    }

    return 0;
}