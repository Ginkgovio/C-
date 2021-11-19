//完全平方数
#include <stdio.h>
#include <math.h>

int IsSquare(int n)
{
    if ((int)sqrt(n) * (int)sqrt(n) == n)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int n;

    scanf_s("%d", &n);
    if (IsSquare(n)) printf("YES\n");
    else printf("NO\n");

    return 0;
}