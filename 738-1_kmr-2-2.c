#include <stdio.h>

int main()
{
    int n = 0, x = 0, p = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        p = p * (x - i);
    }
    printf("%d\n", p);
    return 0;
}