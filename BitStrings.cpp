#include <iostream>
#include <math.h>
#include <stdio.h>

#define lli long long int
#define li long int
#define ld long double

using namespace std;

lli BitString(lli n)
{
    ld result = pow(2, n);
    return result;
}

int main()
{
    lli n;
    cin >> n;
    cout << BitString(n);
}