#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main(void){
//	int a=10;     //申请4个字节的内存空间
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
	struct book b1 = { "C语言程序设计", 55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;                  //变量可以直接赋值修改 
	strcpy(b1.name, "C++");        //数组需要使用strcpy库函数进行修改
	printf("修改后的书名：%s\n", b1.name);
	printf("修改后的价格是：%d元\n", b1.price);
	struct book*p = &b1;
	printf("%s\n", (*p).name);
	printf("%d\n\n\n", (*p).price);
	printf("%s\n", p->name);
	printf("%d\n", p->price);
	return 0;

}