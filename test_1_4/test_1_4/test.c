#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //标准输入输出文件库   


//
//int main(void){   main是主函数，是程序的入口，有且仅有一个 
//	printf("hello  world\n");
//	return 0;
//	
//} 


//int main(void){
//	char jj='A';         
//	printf("%c\n",jj);     %c  ----打印字符格式的数据 
//	return 0;
//}

//int main(void){
//	int age=20;
//	printf("%d\n",age);//  %d  ----打印整型十进制数据 
//	return 0;
//}

//----%d----打印整型
//----%c----打印字符 
//----%f----打印浮点型--小数 
//----%p----打印地址 
//----%x---- 打印十六进制 
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
//	scanf("%d%d", &num1, &num2);     //&取地址，向存放num1的地址输入数值 
//	
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}
int aa = 10;         //全局变量的作用域是整个工程
int main()
{
	int num = 100;
	printf("num=%d\n",num);   //局部变量num的作用域就是main函数的{}
	printf("aa=%d\n", aa);
	extern int aaa;      //声明外部标识符
	printf("%d\n", aaa);
		return 0;
}