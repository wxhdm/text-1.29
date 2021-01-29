////使用函数求大小
#include <stdio.h>
//int Max(int a, int b)
//{
//	if (a > b)
//		return(a);
//	else
//		return(b);
//}
//int main()
//{
//	int a=14;
//	int b=15;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//宏的定义
//#define Max(x,y)(x>y?x:y)
//int main()
//{
//	int a = 14;
//	int b = 15;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
int main()
{
	int i = 0;
	while (i <=100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	    return 0;

}