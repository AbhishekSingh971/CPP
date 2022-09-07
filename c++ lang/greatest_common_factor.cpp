#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the first no. = ";
    cin >> a;
    cout << "enter the second no. = ";
    cin >> b;
    if (a >= b)
    {
        for (int i = b; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << "the largest common factor is : " << i << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = a; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << "the largest common factor is : " << i << endl;
                break;
            }
        }
    }

    return 0;
}