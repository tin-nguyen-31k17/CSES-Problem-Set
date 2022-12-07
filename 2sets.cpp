#include <iostream>
#include <string>
#include <vector>
#define lli long long int

using namespace std;

int TwoSets(lli n)
{
    int sum = 0;
    vector<int> vec1(0), vec2(0);

    for (int i = 0; i < n; i++)
    {
        sum += i+1;
        vec1.push_back(i+1);
    }
    if (sum % 2== 0)
    {
        cout << "YES" << endl;
        sum = sum/2;
        int temp = 0;
        while (temp != sum)
        {
        }
    }
    else cout << "NO";
}

int main()
{
    lli n;
    cin >> n;
    return TwoSets(n);       
}