#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(void){
//	//�ַ����Ľ�����־�� \0 
//	// \0 ��һ��ת���ַ� 0    ����ֵ�� 0
//	//EOF  ��end of file  �ļ�������־ 
//	return 0;
//}

// int Max(int x,int y){
//	if (y>x)
//	return y;
//	else
//	return x;
//}
//
//int main (){
//	int num1=20;
//	int num2=30;
//	int max=0;
////	num1=scanf("%d",&num1);
////	num2=scanf("%d",&num2);
//	max=Max(num1,num2);
//printf("max=%d\n",max);
//	return 0;
//} 
//
//int main (void){
//	int a =10;
//	int aa[]={1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));   //int��  4�ֽ� 
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof a);    //sizeof����һ���������������һ������������Ҫ���ŵ� 
////	printf("%d\n",sizeof int);   error
//	printf("%d\n",sizeof(aa));
//	printf("%d\n",sizeof(aa)/sizeof(aa[0]));  //aa�����С/aa�����һ��Ԫ�صĴ�С==aa�����Ԫ�ظ��� 
//	return 0;
//}

//int main(void){
//	int a=0;          //int ռ4���ֽڣ�==32����λ         �����Ʊ�ʾ00000000000000000000000000000000 
//	int b=~a;        //~�ǰ�λȡ��                        �����Ʊ�ʾ11111111111111111111111111111111 
//	printf("%d\n",b);
//	
//	//Դ�� ����  ����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//��һλΪ����λ  0Ϊ����   1Ϊ����
//	//��ӡ��ʱ�򣬴�ӡ����Դ��
//	//��ӡb  ����Ҫ��b�洢��������ӡ��ʱ��������ӡ
//	//11111111111111111111111111111111�洢�Ľ����11111111111111111111111111111110�洢ʱ���Ƚ�b�ķ���λ���䣬Ȼ���1 ������λ����������λȡ�� 
//	 //�õ�10000000000000000000000000000001 
//} 



//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//������Դ��  ����  ���� ��ͬ
//����
//ԭ�� --------- ------������--------������
//д������������   ����λ��λȡ��   ����+1 

//int main(void){
//	int a=10;
////	int b=a++;   //����++����ʹ�ã���++   ���a=11  b=10
//    int b=++a;   //ǰ��++����++����ʹ��   ���a=11  b=11 
//	printf("a=%d b=%d",a,b);
//	return 0;
//} 


//int main(void){
//	int a=(int)3.14;  //ǿ������ת�� 
//	printf("%d",a);
//	return 0;
//} 

//int main(void){
//	int a=3;    //��------��0 
//	int b=0;    //��------0 
//	int c=a&&b;    //�߼��� 
//	int d=a||b;    //�߼��� 
//	printf("%d\n",c);
//	printf("%d\n",d);
//	return 0;
//} 

//int main (void){
//	int a=10;
//	int b=20;
//	int max=0;
//	if (a>b)
//	max=a;
//	else
//	max=b;
//	printf("%d\n",max);
//	return 0;
//} 

//int main(void){
//	int a=10;
//	int b=250;
//	int max=0;
//	max=(a>b?a:b);    //�����������ֳ���Ŀ������ 
//	printf("%d\n",max);
//	return 0;
//}


//int main(void){
//	int aa[10]={2};
//	printf("%d\n",aa[5]);   //[]�±����ò�����
//	
//	int a=10;
//	int b=20;
//	int sum=add(a,b);      //�������ò����� 
//	printf("sum=%d\n",sum);
//	return 0;
//} 
//int add(int x,int y){
//	int z=0;
//	z=x+y;
//	return z;
//}

//int main (void){
//	typedef unsigned int Uint;
//	unsigned int num=20;
//	Uint num2 =20;
//	return 0;
//}
//
//int main(void){
//	int i=0;
//	while (i<5){
//		testa();
//		i++;
//	}
//	return 0;
//}
//
//void testa(){
//  static	int a=1;        //a��һ����̬�ľֲ�����   static���ξֲ��������ֲ��������������ڱ䳤 
//	a++;
//	printf("a= %d\n",a);
//}


//extern �����ⲿ���ţ���һ��.c�ļ�����ȫ�ֱ���������һ��.c�ļ���������Ϊ�ⲿ���ţ������������ļ���ʹ�����ȫ�ֱ���
//static����ȫ�ֱ���������ı�ȫ�ֱ�����������ʹ��ȫ�ֱ���ֻ����һ��.c�ļ���ʹ�ã���ʱ�ⲿ�������������� 

//#define MAX(X,Y) (X>Y?X:Y)
//
//int Max(int x,int y){
//	if (x>y)
//	return x;
//	else
//	return y;
//}
//
//int main(void){
//	int a=10;
//	int b=20;
//	//�������
//	int max=Max(a,b);
//	printf("�ϴ�ֵΪ��%d\n",max);
//	//���� 
//	int max1=MAX(a,b);
//	printf("max:%d",max1);
//	return 0;
//}

//int main(void){
//	int a=10;
//	int *p=&a;    //��һ�ִ�ŵ�ַ�ı���-----ָ����� 
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p=50;   //�����ò����� 
//	printf("�ı��Ժ��a��ֵΪ��%d\n",a);
//	return 0;
//}

//int main(void){
//	char a = 'a';
//	char *ba = &a;
//	printf("ԭʼa��ֵ��%c\n", a);
//	char b = *ba = 's';
//	printf("�����øı��ַ�д洢�����ݣ����Ϊ��%c\n", b);
//	printf("%d", sizeof(ba));
//	return 0;
//}