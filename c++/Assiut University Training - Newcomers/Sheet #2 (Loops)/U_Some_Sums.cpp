#include <iostream>
using namespace std;

int main()
{
    int n, a, b, temp, check_sum, sum = 0;
    cin >> n >> a >> b;

    for(int x = 1; x <= n; x++)
    {
        check_sum = 0;
        temp = x;
        while(temp)
        {
            check_sum += temp % 10;
            temp /= 10;
        }
        if(check_sum >= a && check_sum <= b)
        {
            sum += x;
        }
    }
    cout << sum;
    return 0;
}
