/*
Name        :kadai3.c
Author      :komurataketo
Version     :ubuntu20.04
LICENSE     :The source code is licensed MIT. The website content is licensed ,see LICENSE.
Description :Prime factorization
*/


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

