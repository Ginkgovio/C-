//求 Sn＝a+aa+aaa+...+aa...a之值，其中a是一个数字。例如: 2+22+222+2222(此时n＝4)，n由键盘输入。
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