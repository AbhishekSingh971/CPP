#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10][10];
    int n;
    cout << "Enter the row(n) and column(m) in array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
            {
            cout << " $ ";
            }
            else{
                cout<<"   ";
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (i>j)
            {
                cout<<"   ";
            }
            else{
                cout<<" $ ";
            }
        }

        for (int j = 0; j < n; j++)
        {
            if ((i+j) > (n-2))
            {
                cout<<" $ ";
            }
            else{
                cout<<"   ";
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (j<=i)
            {
            cout << " $ ";
            }
            else{
                cout<<"   ";
            }
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<=i)
            {
            cout << " $ ";
            }
            else{
                cout<<"   ";
            }
        }

        for (int j = 0; j < n; j++)
        {
            if ((i+j) > (n-2))
            {
                cout<<" $ ";
            }
            else{
                cout<<"   ";
            }
        }

         for (int j = 0; j < n; j++)
        {
            if (i>j)
            {
                cout<<"   ";
            }
            else{
                cout<<" $ ";
            }
        }
        
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
            {
            cout << " $ ";
            }
            else{
                cout<<"   ";
            }
        }

        cout << endl;
    }

    return 0;
}