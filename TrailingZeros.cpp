#include <iostream>
#include <string>

using namespace std;

int TrailingZeros (int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n / 5;
        n = n / 5;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << TrailingZeros(n);
}