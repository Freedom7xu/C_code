//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 58)
//			printf("壮年\n");
//		else if (age >= 58 && age < 90)
//			printf("老年\n");
//		else
//			printf("高寿\n");
//return 0;
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	if (b == 2)
//		printf("hehe\n");
//	else
//		printf("haha");
//		return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	if (5==num)
//		printf("hehhehe\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1==((a/2)%))
//		printf("这是一个奇数\n");
//	else
//		printf("这是偶数\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//			printf(" %d", i);
//		i++;
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int i= 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//	}


//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{  
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m= %d    n= %d\n", m, n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c \n", ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认（Y/N）:>");
//	
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (;;)
//	{
//		printf("hehhe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("%d \n",j);
//	}
//	return 0; 
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i<=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret= %d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	for (n=1;n<=10;n++)
//	{
//		ret = 1;
//		for (i=1;i<=n;i++)
//		{
//			ret = ret*i;
//		}
//		sum = ret + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i=1;i<=10;i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("sum= %d", sum);
//	return 0;
//}

