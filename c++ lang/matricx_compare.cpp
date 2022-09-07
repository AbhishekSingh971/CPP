#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10][10];
    int n, i = 0, j = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int value = arr[0][0];
    int count = 0;
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            if (m == n)
            {
                if(value == arr[m][n]){
                    count ++ ;
                }
                
            }
        }
    }

    if(count == n){
        cout<<"Equal"<<endl;
    }

    return 0;
}