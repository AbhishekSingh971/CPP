#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num;
    cin >> num;

    cout << "Prime Numbers between 1 to " << num << " : ";
    for (i = 2; i < num; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            cout << i << " ";
        }
        else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            cout << " ";
        }
        else
        {
            cout << i << " ";
        }
    }

    return 0;
}