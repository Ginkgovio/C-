//寻找鞍点
#include <stdio.h>
int main(int argc, const char * argv[])
 {
    // insert code here...
    int n;
    scanf("%d", &n);
    int a[n][n];
    int i,j;
	
    for ( i = 0; i < n; i++) 
	{
        for ( j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
	
    int sign = 0, max, min;
    int right = 0, left = 0;
	
    for ( i = 0; i < n; i++) 
	{
        max = a[i][0];
        for ( j = 1; j < n; j++)
		{
            if ( a[i][j] > max )
			{
                max = a[i][j];
                right = j;
            }
        }
		
        min = a[0][right];
        for ( j = 1; j < n; j++ )
			{
            if ( a[j][right] < min ) 
			{
                min = a[j][right];
                left = j;
            }
        }
		
        if ( i == left )
		{
            sign = 1;
            printf("%d %d\n", left, right);
            break;
        }
    }
	
    if ( sign == 0 ) 
	{
        printf("NO\n");
    }
    return 0;
}