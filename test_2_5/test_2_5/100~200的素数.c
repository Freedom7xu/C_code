//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count =0;
//	for (i = 100; i <= 200; i++)
//	{
//		//素数的除数只有1和它本身
//		//素数判断规则
//		//试除法
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n\n%d\n", count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)    //从1101开始，每次+2，直接将偶数排除
//	{
//		//素数的除数只有1和它本身
//		//素数判断规则
//		//试除法
//		int j = 0;
//		for (j = 2;j<=sqrt(i); j++)  //非素数一定有一个数小于开平方，如16=4*4,16有因数2
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j>sqrt(i))    //
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n\n%d\n", count);
//	return 0;
//}