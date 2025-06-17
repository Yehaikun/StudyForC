//#include <stdio.h>
//int main()
//{
//	/*
//	取值范围：double>float>long long>long>int>short>char
//	C语言数据类型：
//	一、整数类型：
//		1.short(-2^15—2^15-1，占位符为%d，2字节)
//		2.int(-2^31—2^31-1，占位符为%d，4字节)
//		3.long(-2^31—2^31-1,数据后面结尾加L，占位符为%ld，4字节)
//		4.long long（19位数，8字节） 
//		5.signed 与unsigned定义有符号整数和无符号整数
//		sizeof测量字节，语法：sizeof（数据类型标识符/变量）
//	
//	二、小数类型（无法跟unsigned使用）
//		1.float(单精度小数，表示38位数，小数点后6位，4个字节)
//		2.double（双精度小数，表示308位数，小数点后15位，8个字节） 
//	
//	三、字符类型
//		char（ASCII码表的字符，不能是中文汉字、标点等，1字节内存）
//	四、字符串类型
//		定义方法：char 字符串名[内存大小] = 字符串字面量;
//		内存大小计算方法：
//			1.字母、数字、英文字符 ->> 一个字节
//			2.中文字符 ->>两个字节
//			3.结束标记 ->>一个字节
//	
//	
//	*/
//	//1、定义short类型
//	short a1 = 32767;
//	printf("这是整数类型的%s类型变量打印结果：%d\n", "short", a1);
//	printf("这是整数类型的%s类型变量占用内存：%zu\n", "short",sizeof(a1));
//	//2、定义int类型
//	int a2 = 213412;
//	printf("这是整数类型的%s类型变量打印结果：%d\n", "int", a2);
//	printf("这是整数类型的%s类型变量占用内存：%zu\n", "int", sizeof(a2));
//
//	//3、定义long、类型
//	long a3 = 123124L;
//	printf("这是整数类型的%s类型变量打印结果：%ld\n", "long", a3);
//	printf("这是整数类型的%s类型变量占用内存：%zu\n", "long", sizeof(a3));
//
//	//4、定义long long类型
//	long long a4 = 123214123LL;
//	printf("这是整数类型的%s类型变量打印结果：%lld\n", "long long", a4);
//	printf("这是整数类型的%s类型变量占用内存：%zu\n", "long long", sizeof(a4));
//
//	//定义有/无符号整数
//	signed long a5 = 123;
//	printf("这是有符号整数：%ld\n", a5);
//	
//	//定义float和double类型
//	float a6 = 3.1415926535897932384626F;
//	printf("%f\n", a6);
//	printf("这是小数类型的%s类型变量占用内存：%zu\n", "float", sizeof(a6));
//	double a7 = 3.1415926535897932384626;
//	printf("%lf\n", a7);
//	printf("这是小数类型的%s类型变量占用内存：%zu\n", "double", sizeof(a7));
//	//定义字符类型
//	char a8 = 'a';
//	printf("%c\n", a8);
//	printf("这是%s类型变量占用内存：%zu\n", "char", sizeof(a8));
//
//
//	return 0;
//}