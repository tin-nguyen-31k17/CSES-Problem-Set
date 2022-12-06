#include <iostream>
#include <string>
#include <vector>

using namespace std;

int MissinNum (vector<int> arr)
{
    int miss = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i+1) miss = i + 1;
        cout << arr[i];
    }
    
    return miss;
}

int main()
{
    int n;
    string s;
    vector<int> arr(0);

    cin >> n;
    cin >> s;

    for (int i = 0; i < n-1; i++)
    {
        arr.push_back(s[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > arr[j+1]) swap (arr[j], arr[j+1]);
    }

    cout << MissinNum(arr);
}