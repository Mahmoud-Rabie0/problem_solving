#include <iostream>
using namespace std;

int main()
{
    int n, counter, even, odd, pos, neg;
    cin >> n;
    even = odd = pos = neg = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> counter;
        //check even or odd
        if(counter % 2 == 0)
            even ++;
        else
            odd ++;

        //check positive or negative
        if(counter > 0)
            pos ++;
        else
            (counter != 0)? neg ++ : counter = 0;
    }

    cout << "Even: " << even;
    cout << "\nOdd: " << odd;
    cout << "\nPositive: " << pos;
    cout << "\nNegative: " << neg;
    return 0;
}
