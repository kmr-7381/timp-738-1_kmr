#include <stdio.h>

int main()
{
    int n = 0, x = 0, k = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x <= 0)
        k = k + 1;
    }
    printf("%d\n", k);
    return 0;
}