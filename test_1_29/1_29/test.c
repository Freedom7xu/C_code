#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int age = 15;
//	if (age > 18)
//		printf("成年了\n");
//	else
//		printf("未成年\n");
//	return 0;
//}

int main()
{
	int age = 100;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 56)
		printf("壮年\n");
	else if (age >= 56 && age < 90)
		printf("老年\n");
	else
		printf("高龄\n");
	return 0;
}