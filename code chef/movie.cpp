#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int s, r;
            cin >> s >> r;
            if (s <= x)
            {
                if (r > sum)
                {
                    sum = r;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}