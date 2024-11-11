#include <iostream>
using namespace std;

int main(){
    unsigned long long n, m, n_last_digit, m_last_digit;
    cin >> n >> m;

    n_last_digit = n % 10;
    m_last_digit = m % 10;

    cout << n_last_digit + m_last_digit;
    return 0;
}