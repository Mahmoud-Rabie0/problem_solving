#include <iostream>
using namespace std;

int main(){
    int a, b, c, smallest, mid, greatest;
    cin >> a >> b >> c;
    
    if(a <= b && a <= c){
        smallest = a;
        if(b <= c){
            mid = b, greatest = c;
        }else{
            mid = c, greatest = b;
        }
    }else if(b < a && b <= c){
        smallest = b;
        if(a < c){
            mid = a, greatest = c;
        }else{
            mid = c, greatest = a;
        }
    }else if(c < a && c < b){
        smallest = c;
        if(a < b){
            mid = a, greatest = b;
        }else{
            mid = b, greatest = a;
        }
    }

    cout << smallest << "\n" << mid << "\n" << greatest << "\n";
    cout << "\n" << a << "\n" << b << "\n" << c;
    return 0;
}