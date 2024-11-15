#include <iostream>
using namespace std;

int main(){
    double n;
    cin >> n;

    if(n - (int)n == 0){
        cout << "int " << n;
    }else{
        cout << "float " << (int)n << " " << n - (int)n;
    }
    return 0;
}