#include<stdio.h>
#include<string.h> 
//int main(void){
//	int num1=0;
//	int num2=0;
//	scanf("%d%d",&num1,&num2);
//	int sum=0;
//	sum=num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}


//int main (void){
//const	int aa=4;        //const���γ����� 
//	printf("%d\n",aa);     
////	aa =8;
//	printf("%d\n",aa);
//	
//	return 0;
//	
//}

//int main(void){
//	const int n=10;      //n�Ǳ������������г����ԣ���������˵n�ǳ����� 
//	int nn[n]={0};
//	return 0;
//} 


//#define max 10
//int main(void){
//	int nn[max]={0};
//	printf("%d\n",max);
//	return 0;
//	
//} 


//enum sex      //ö�ٳ��� 
//{
//	men,
//	woman,
//	select
//};
//
//int main(void){
//	enum sex xingbie=men;
//	xingbie=woman;
//	return 0;
//}

//int main(void){
//	char aa[]="abc";             //aa�����е�ֵΪ a b c /0 
//	char bb[]={'a','b','c'};     //bb�����е�ֵΪ a b c 
//	printf("%s\n",aa);
//	printf("%s\n",bb);
//	
//	printf("%d\n",strlen(aa));          //strlen�����ַ������� 
//	printf("%d\n",strlen(bb));           //�ڼ����ַ�������ʱ��\0�ǽ�����־���������ַ������� 
//	return 0;
//}

//int  main(void){
//	printf("%d\n",strlen("c:\test\32\test.c"));   //13���ַ���\t��һ��ת���ַ���\32��һ��ת���ַ��� 
//	
//	printf("%c\n",'\32');     //�Ƚ�8���Ƶ�32ת����ʮ��������26����ΪASCII��ֵ->����Ӧ���ַ���������Ľ�� 
//	printf("%c\n",'\x61');   //�Ƚ�16���Ƶ�61ת����ʮ��������97����ΪASCII��ֵa����Ӧ���ַ���������Ľ�� 
//	
//	return 0;
//}
//
//int main(void){
//	int input =0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>��");
//	scanf("%d",&input);
//	if(input==1)
//	printf("��offer\n");
//	else
//	  printf("������\n");
//	return 0;
//	
//} 

//int main(void){
//	int line=0;
//	printf("�������\n");
//	while(line<20000)
//	{
//		printf("��һ�д���");
//		printf("%d\n",line);
//		line++;
//	}
//	printf("��offer");
//	return 0;
//}

//int main(void){
//	int sum=0;
//	int num1=100;
//	int num2=200;
//	int a=10;
//	int b=20;
//	sum=add(num1,num2);
//	printf("sum=%d\n",sum);
//	sum=add(a,b);
//	printf("sum2=%d",sum);
//	return 0;
//}
//
//int add(int x,int y)
//{
//	int z=x+y;
//	return z;
//}

//
//int main(void){
//	int aa[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	while(i<10)
//	{
//		printf("%d\n",aa[i]);
//		i++;
//	}
//	return 0;
//}

//
//int main(void){
//	int a=5;       //101
//	int b=3;       //011
//	int c=a|b;     //111=7
//	printf("%d\n",c);
//	int d=a^b;
//	printf("%d\n",d);      //��λ�����򣺶�Ӧ�Ķ�����λ��ͬ����Ϊ0����Ӧ�Ķ�����λ���죬��Ϊ1          a^b=110=6 
//	return 0;
//	
//}

//int main(void){
//	int a=10;
//	
//	printf("%d\n",a);
//	printf("%d\n",!a);  //���0����Ϊ�� 
//	return 0;
//}

//int main(void){
//		int a=10;
//		printf("%d\n",a);
//		printf("%d\n",sizeof(a));    //sizeof�Ǽ���ռ�Ĵ�С����λ���ֽ� 
//		printf("%d\n",sizeof(int));
//		
//	int aa[10] = { 0 };
//	int s = 0;
//	printf("%d\n", sizeof(aa));    //�Ǹ�Ԫ��*ÿ��Ԫ�صĴ�С
//	s = sizeof(aa) / sizeof (aa[0]);   //����������Ԫ�صĸ���    �����С/��λԪ�ش�С 
//	printf("Ԫ�ظ���=%d\n", s);
//	return 0;
//}