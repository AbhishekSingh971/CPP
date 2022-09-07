#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, y;
        cin >> n >> k;
        // x = (n / 5) + (n % 5 == 0 ? 0 : 1);
        // y = (k / 5) + (k % 5 == 0 ? 0 : 1);
        x = ((n + 4) / 5);
        y = ((k + 4) / 5);
        cout << x - y << endl;
    }
    return 0;
}