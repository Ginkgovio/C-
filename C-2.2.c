//求 Sn＝a+aa+aaa+...+aa...a之值
#include "stdio.h"
#include "math.h"
int main()
{
    int a, n, sn = 0, x = 0, sum = 0, i;
    scanf("a=%d,n=%d", &a, &n);
    for (i = 1; i <= n; i++)
    {
        sn = sn + a * pow(10, x);
        x++;
        sum += sn;
    }
    printf("%d", sum);
    return 0;
}