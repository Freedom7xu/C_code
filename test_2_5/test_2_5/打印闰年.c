//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	//闰年的两个判断条件
//	//1. 能被4整除，不能被100整除
//	//2. 能被400整除
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\n%d ", count);
//	return 0;
//}