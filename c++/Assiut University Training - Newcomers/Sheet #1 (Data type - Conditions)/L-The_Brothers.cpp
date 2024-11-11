#include <iostream>
using namespace std;

int main(){
    string p1_first_name, p1_second_name, p2_first_name, p2_second_name;
    cin >> p1_first_name >> p1_second_name;
    cin >> p2_first_name >> p2_second_name;
    
    if(p1_first_name != p2_first_name && p1_second_name == p2_second_name)
    cout << "ARE Brothers";
    else
    cout << "NOT";
    
    return 0;
}