//函数调用
#include <stdio.h>
#include "add.h"
int main()
{
	int a = 20;
	int b = 10;
	int sum;
	sum = ADD(a, b);
	printf("%d", sum);
	return 0;
}
