//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count =0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�����ĳ���ֻ��1��������
//		//�����жϹ���
//		//�Գ���
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
//	for (i = 101; i <= 200; i+=2)    //��1101��ʼ��ÿ��+2��ֱ�ӽ�ż���ų�
//	{
//		//�����ĳ���ֻ��1��������
//		//�����жϹ���
//		//�Գ���
//		int j = 0;
//		for (j = 2;j<=sqrt(i); j++)  //������һ����һ����С�ڿ�ƽ������16=4*4,16������2
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