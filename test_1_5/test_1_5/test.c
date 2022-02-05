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
//const	int aa=4;        //const修饰常变量 
//	printf("%d\n",aa);     
////	aa =8;
//	printf("%d\n",aa);
//	
//	return 0;
//	
//}

//int main(void){
//	const int n=10;      //n是变量，但是又有常属性，所以我们说n是常变量 
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


//enum sex      //枚举常量 
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
//	char aa[]="abc";             //aa数组中的值为 a b c /0 
//	char bb[]={'a','b','c'};     //bb数组中的值为 a b c 
//	printf("%s\n",aa);
//	printf("%s\n",bb);
//	
//	printf("%d\n",strlen(aa));          //strlen计算字符串长度 
//	printf("%d\n",strlen(bb));           //在计算字符串长度时候\0是结束标志，不算做字符串内容 
//	return 0;
//}

//int  main(void){
//	printf("%d\n",strlen("c:\test\32\test.c"));   //13个字符（\t算一个转义字符，\32算一个转义字符） 
//	
//	printf("%c\n",'\32');     //先将8进制的32转换成十进制数字26，作为ASCII码值->，对应的字符将是输出的结果 
//	printf("%c\n",'\x61');   //先将16进制的61转换成十进制数字97，作为ASCII码值a，对应的字符将是输出的结果 
//	
//	return 0;
//}
//
//int main(void){
//	int input =0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>：");
//	scanf("%d",&input);
//	if(input==1)
//	printf("好offer\n");
//	else
//	  printf("卖红薯\n");
//	return 0;
//	
//} 

//int main(void){
//	int line=0;
//	printf("加入比特\n");
//	while(line<20000)
//	{
//		printf("敲一行代码");
//		printf("%d\n",line);
//		line++;
//	}
//	printf("好offer");
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
//	printf("%d\n",d);      //按位异或规则：对应的二进制位相同，则为0，对应的二进制位相异，则为1          a^b=110=6 
//	return 0;
//	
//}

//int main(void){
//	int a=10;
//	
//	printf("%d\n",a);
//	printf("%d\n",!a);  //输出0，即为假 
//	return 0;
//}

//int main(void){
//		int a=10;
//		printf("%d\n",a);
//		printf("%d\n",sizeof(a));    //sizeof是计算空间的大小，单位是字节 
//		printf("%d\n",sizeof(int));
//		
//	int aa[10] = { 0 };
//	int s = 0;
//	printf("%d\n", sizeof(aa));    //是个元素*每个元素的大小
//	s = sizeof(aa) / sizeof (aa[0]);   //计算数组内元素的个数    数组大小/单位元素大小 
//	printf("元素个数=%d\n", s);
//	return 0;
//}