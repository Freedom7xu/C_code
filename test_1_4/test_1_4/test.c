#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //��׼��������ļ���   


//
//int main(void){   main�����������ǳ������ڣ����ҽ���һ�� 
//	printf("hello  world\n");
//	return 0;
//	
//} 


//int main(void){
//	char jj='A';         
//	printf("%c\n",jj);     %c  ----��ӡ�ַ���ʽ������ 
//	return 0;
//}

//int main(void){
//	int age=20;
//	printf("%d\n",age);//  %d  ----��ӡ����ʮ�������� 
//	return 0;
//}

//----%d----��ӡ����
//----%c----��ӡ�ַ� 
//----%f----��ӡ������--С�� 
//----%p----��ӡ��ַ 
//----%x---- ��ӡʮ������ 
//
//int main(void){
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	
//	
//}

//int a=100;
//
//int main(void){
//	 int a=10;
//	 printf("%d\n",a);
//	 return 0;
//	 }

//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);     //&ȡ��ַ������num1�ĵ�ַ������ֵ 
//	
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}
int aa = 10;         //ȫ�ֱ���������������������
int main()
{
	int num = 100;
	printf("num=%d\n",num);   //�ֲ�����num�����������main������{}
	printf("aa=%d\n", aa);
	extern int aaa;      //�����ⲿ��ʶ��
	printf("%d\n", aaa);
		return 0;
}