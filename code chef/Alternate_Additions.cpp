#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b;
        c = b - a;
        int x = 0;
        if (c % 3 == 0 || c % 3 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

// while (a<b)

        // {
        //     x++;
        //     if (x % 2 == 0)
        //     {
        //         a+=2;
        //     }
        //     else{
        //         a+=1;
        //     }

        //     if (a==b)
        //      {
        //         cout<<"YES"<<endl;
        //         break;
        //     }
        // }
        // if (a>b)
        // {
        //      cout<<"NO"<<endl;
        // }
    }
    return 0;
}