/*header.h 素因数分解をするプログラム*/

#include<stdio.h>
#include<math.h>

int main()
{
	int n, x, i;
	printf("整数を入力:");
	scanf("%d", &n);
	printf("%d", n);
	for (i=2, x=n; i<=sqrt(n); )
	{
		if (n%i == 0)
		{
			printf(" 素数:%d", i);
			n=n/i;
			x=n;
		}
		else
		{
			if(i>2)
			{
				i++;
			}
		i++;
		}
	}
	printf(" 素数:%d\n", x);
	return 0;
}

