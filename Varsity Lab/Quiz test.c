#include<stdio.h>
int main()
{
	int i, n;
	for (i = 1; i <= 100; i++) {
		scanf("%d", &n);
		if (n % 7 == 0)
			printf("%d ", n);
	}

	return 0;
}
