#include <stdio.h>

int main()
{
    int n, x, even = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even += 1;
        }
    }
    (even > n - even) ? printf("READY FOR BATTLE\n") : printf("NOT READY\n");
    return 0;
}