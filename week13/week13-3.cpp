#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,n;
	//yourcode
	scanf("%d", &n);
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < n; j ++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < n; j ++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < n; j ++)
		{
			c[i][j] = 0;
			for (k = 0; k < n; k ++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			printf("%3d ", c[i][j]);
		}
		printf("\n");
	}

}