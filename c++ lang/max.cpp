#include <iostream>
using namespace std;
int maxFunction(int a, int b, int c, int d)
{
    int max;
    if (a > b && a > c && a > d)
    {
        max = a;
        return max;
    }
    else if (b > a && b > c && b > d)
    {
        max = b;
        return max;
    }
    else if (c > a && c > b && c > d)
    {
        max = c;
        return max;
    }
    else
    {
        max = d;
        return max;
    }
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    maxFunction(a,b,c,d);

    return 0;
}