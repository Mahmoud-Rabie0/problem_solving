#include <iostream>
using namespace std;

int main(){
    int a, b, c, max, min;
    cin >> a >> b >> c;

    if(a >= b && a >= c){
        max = a;
        min = (b >= c) ? c : b;
    }else if(b >= a && b >= c){
        max = b;
        min = (a >= c) ? c : a;
    }else if(c >= a && c >= b){
        max = c;
        min = (a >= b) ? b : a;
    }else{
        min = max = a = b = c;
    }

    cout << min << " " << max;
    return 0;
}