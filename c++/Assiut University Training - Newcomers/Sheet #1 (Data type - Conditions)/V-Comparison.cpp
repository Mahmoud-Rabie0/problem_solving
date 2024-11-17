#include <iostream>
using namespace std;

int main(){
    string answer;
    short a, b;
    char s;
    cin >> a >> s >> b;

    switch(s){
        case '>':
            answer = (a > b) ? "Right" : "Wrong";
            break;
        case '<':
            answer = (a < b) ? "Right" : "Wrong";
            break;
        case '=':
            answer = (a == b) ? "Right" : "Wrong";
            break;
    }

    cout << answer;
    return 0;
}