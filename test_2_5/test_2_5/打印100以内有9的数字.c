//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////思路   个位模10==9，十位除10==9
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)    //这里如果用else if，会将99漏掉
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n\n%d\n", count);
//	return 0;
//}