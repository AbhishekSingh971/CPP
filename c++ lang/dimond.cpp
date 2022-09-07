#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row,column;
    cout<<"Enter the number of row : ";
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i + j > row-2)
            {
                cout << " / ";
            }
            else
            {
                cout << "   ";
            }
        }
        for (int j = 0; j <= row; j++)
        {
            if (j <= i)
            {
                cout << " \\ ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j >= i)
            {
                cout << " \\ ";
            }
            else
            {
                cout << "   ";
            }
        }
        for (int j = 0; j < row; j++)
        {
            if (i + j < row)
            {
                cout << " / ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}