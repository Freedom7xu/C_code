#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int age = 15;
//	if (age > 18)
//		printf("������\n");
//	else
//		printf("δ����\n");
//	return 0;
//}

int main()
{
	int age = 100;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 56)
		printf("׳��\n");
	else if (age >= 56 && age < 90)
		printf("����\n");
	else
		printf("����\n");
	return 0;
}