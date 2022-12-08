#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define lli long long int
#define li long int
#define ld long double

using namespace std;

int main()
{
    int n, k1, k2, ktot, red;
    cin >> n;
    k1 = n * n;
    k2 = k1 - 1;
    ktot = k1 * k2/2;
    red = 4*(n-1) * (n-2);
    cout << ktot-red;
    return 0;
}