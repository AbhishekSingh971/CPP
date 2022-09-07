#include <bits/stdc++.h>
using namespace std;
void prime();

int main()
{

    char ch;
    prime();
    do
    {
        cout << "y or n: ";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
        {
            break;
        }
        prime();
    } while (ch == 'y' || ch == 'Y');
    return 0;
}

void prime()
{
    int a, b;
    cout << "Enter the number of a : ";
    cin >> a;
    cout << "Enter the number of b : ";
    cin >> b;
    if (a <= b)
    {
        for (int i = 2; i <= a; i++)
        {
            if (i == 2 || i == 3 || i == 5 || i == 7)
            {
                cout << i << " ";
            }
            else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        for (int i = 2; i <= b; i++)
        {
            if (i == 2 || i == 3 || i == 5 || i == 7)
            {
                cout << i << " ";
            }
            else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            {
                cout << i << " ";
            }
        }
    }
    cout << endl;
}