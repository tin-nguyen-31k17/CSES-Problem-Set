#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long IncreasingArray (long long n, vector<long long> arr)
{
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
            count += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    return count;
}

int main()
{
    long long n;
    long long a;
    vector<long long> arr(0);
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    cout << IncreasingArray(n, arr);
}