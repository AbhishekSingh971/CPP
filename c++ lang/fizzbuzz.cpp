#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = stoi(str);
    if (n % 3 == 0 && n % 5 == 0)
    {
        if (n % 2 == 0)
        {
            cout << "BUZZ FIZZ" << endl;
        }
        else
        {
            cout << "FIZZ BUZZ" << endl;
        }
    }
    else if (n % 5 == 0)
    {
        cout << "BUZZ" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "FIZZ" << endl;
    }
    else
    {
        cout << str << endl;
    }

    return 0;
}