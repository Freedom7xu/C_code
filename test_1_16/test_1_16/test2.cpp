#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main(void){
//	int a=10;     //����4���ֽڵ��ڴ�ռ�
//	printf("%p\n",&a); 
//	int* p=&a;
//	printf("%p\n",p);
//	*p=300;
//	printf("%d\n",a);
//	return 0;
//}
//
//int main(void){
//	double d=3.14;
//	double*a=&d;
//	printf("%d\n",sizeof(a));
//	*a=5.5;
//	printf("%lf\n",d);
//	printf("%lf\n",*a);
//	return 0;
//}

struct book{
	char name[20];
	short price;

};

int main(){
	struct book b1 = { "C���Գ������", 55 };
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;                  //��������ֱ�Ӹ�ֵ�޸� 
	strcpy(b1.name, "C++");        //������Ҫʹ��strcpy�⺯�������޸�
	printf("�޸ĺ��������%s\n", b1.name);
	printf("�޸ĺ�ļ۸��ǣ�%dԪ\n", b1.price);
	struct book*p = &b1;
	printf("%s\n", (*p).name);
	printf("%d\n\n\n", (*p).price);
	printf("%s\n", p->name);
	printf("%d\n", p->price);
	return 0;

}