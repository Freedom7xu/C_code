#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(void){
//	//字符串的结束标志是 \0 
//	// \0 是一个转义字符 0    它的值是 0
//	//EOF  是end of file  文件结束标志 
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
//	printf("%d\n",sizeof(a));   //int型  4字节 
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof a);    //sizeof属于一个操作符，如果是一个函数，是需要括号的 
////	printf("%d\n",sizeof int);   error
//	printf("%d\n",sizeof(aa));
//	printf("%d\n",sizeof(aa)/sizeof(aa[0]));  //aa数组大小/aa数组第一个元素的大小==aa数组的元素个数 
//	return 0;
//}

//int main(void){
//	int a=0;          //int 占4个字节，==32比特位         二进制表示00000000000000000000000000000000 
//	int b=~a;        //~是按位取反                        二进制表示11111111111111111111111111111111 
//	printf("%d\n",b);
//	
//	//源码 反码  补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//第一位为符号位  0为正数   1为负数
//	//打印的时候，打印的是源码
//	//打印b  首先要将b存储起来，打印的时候再来打印
//	//11111111111111111111111111111111存储的结果是11111111111111111111111111111110存储时，先将b的符号位不变，然后减1 ，符号位不动，其余位取反 
//	 //得到10000000000000000000000000000001 
//} 



//只要是整数，内存中存储的都是二进制的补码
//正数的源码  反码  补码 相同
//负数
//原码 --------- ------》反码--------》补码
//写出二进制序列   其他位按位取反   反码+1 

//int main(void){
//	int a=10;
////	int b=a++;   //后置++，先使用，再++   结果a=11  b=10
//    int b=++a;   //前置++，先++，后使用   结果a=11  b=11 
//	printf("a=%d b=%d",a,b);
//	return 0;
//} 


//int main(void){
//	int a=(int)3.14;  //强制类型转换 
//	printf("%d",a);
//	return 0;
//} 

//int main(void){
//	int a=3;    //真------非0 
//	int b=0;    //假------0 
//	int c=a&&b;    //逻辑与 
//	int d=a||b;    //逻辑或 
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
//	max=(a>b?a:b);    //条件操作符又称三目操作符 
//	printf("%d\n",max);
//	return 0;
//}


//int main(void){
//	int aa[10]={2};
//	printf("%d\n",aa[5]);   //[]下标引用操作符
//	
//	int a=10;
//	int b=20;
//	int sum=add(a,b);      //函数调用操作符 
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
//  static	int a=1;        //a是一个静态的局部变量   static修饰局部变量，局部变量的生命周期变长 
//	a++;
//	printf("a= %d\n",a);
//}


//extern 申明外部符号，在一个.c文件创建全局变量，在另一个.c文件中申明其为外部符号，即可在两个文件中使用这个全局变量
//static修饰全局变量，将会改变全局变量的作用域，使得全局变量只能在一个.c文件中使用，这时外部声明不再起作用 

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
//	//函数解决
//	int max=Max(a,b);
//	printf("较大值为：%d\n",max);
//	//宏解决 
//	int max1=MAX(a,b);
//	printf("max:%d",max1);
//	return 0;
//}

//int main(void){
//	int a=10;
//	int *p=&a;    //有一种存放地址的变量-----指针变量 
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p=50;   //解引用操作符 
//	printf("改变以后的a的值为：%d\n",a);
//	return 0;
//}

//int main(void){
//	char a = 'a';
//	char *ba = &a;
//	printf("原始a的值：%c\n", a);
//	char b = *ba = 's';
//	printf("解引用改变地址中存储的内容，结果为：%c\n", b);
//	printf("%d", sizeof(ba));
//	return 0;
//}