//дһ�����������ж�һ�����ǲ�������
#include <stdio.h>
//int is_prime(int n)
//{
//	int j;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			break;
//	}
//	if (n == j)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d  ", i);
//	}
//	return 0;
//}



//дһ���������ж�һ���ǲ������ꡣ
//int main()
//{
//	int year;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		printf("%d������", year);
//	else
//		printf("%d��������", year);
//	return 0;
//}
int is_leap_year(int i)
{
	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int year;
	printf("�����������У�\n");
	for (year = 1000; year < 2000; year++)
	{
		if (is_leap_year(year) == 1)
			printf("%d  ", year);
	}
	return 0;
}