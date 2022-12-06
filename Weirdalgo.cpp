#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> weirdalgo(long long n)
{
    vector<long long> result(0);
    result.push_back(n);

    if (n == 1) return result;
    while (n != 2 && n != 1)
    {
        if (n%2 == 0)
        {
            n = n/2;
            result.push_back(n);
        }
        else 
        {
            n = n*3 + 1;
            result.push_back(n);
        }
    }
    result.push_back(n/2);
    return result;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> result = weirdalgo(n);
    long long k = result.size();
    for (long long i = 0; i < k; i++)
    {
        cout << result[i] << " ";
    }
}
