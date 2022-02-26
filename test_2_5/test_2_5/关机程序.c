#define _CRT_SECURE_NO_WARNINGS 1、
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，电脑马上关机了，请输入“我是猪”取消关机\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串是否相等
		system("shutdown -a");
	else
		goto again;
	
	return 0;
}