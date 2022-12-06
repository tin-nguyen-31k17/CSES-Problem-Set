#include <iostream>
#include <string>

using namespace std;

int Repetitions(string s)
{
    int n = s.length();
    int longest = 0;

    for (int i = 0; i < n; i++)
    {
        int curlen = 1;
        for (int j = i+1; j < n && s[i] == s[j]; j++) curlen++;

        if (curlen > longest) longest = curlen;
    }

    return longest;
}

int main()
{
    string s;
    cin >> s;
    cout << Repetitions(s);
}