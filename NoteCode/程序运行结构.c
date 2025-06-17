//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>;
//int main()
//{
//	/*
//	程序运行结构
//	一、顺序结构
//	二、分支结构
//		2.1 if 语句
//			基本表达：
//				if (关系表达式)
//				{
//					语句体;
//				}
//				细节1：如果判断的关系表达式是数字，非0则表示条件成立（为True），否则为0则表示条件不成立
//				细节2：如果语句体只有一行，则大括号可省略不写（任何时候都不推荐不写）
//			第二种表达：
//				if (关系表达式)
//				{
//					语句体1;
//				}
//				else
//				{
//					语句体2;
//				}
//			第三种表达
//				if (关系表达式1)
//				{
//					语句体1;
//				}
//				else if (关系表达式2)
//				{
//					语句体2;
//				}
//				else if (关系表达式3)
//				{
//					语句体3;
//				}
//				...
//				else
//				{
//					语句体n;
//				}
//		2.2 switch 语句
//			格式：
//			switch (表达式){
//				case 值1:
//					语句体1;
//					break;
//				case 值2:
//					语句体2;
//					break;
//				...
//				case 值n-1:
//					语句体n-1;
//					break;
//				default:
//					语句体n;
//					break;
//			}
//			细节：
//				1. 表达式：计算结果只能为（字符/整数）；
//				2. case： 值只能是（字符/整数）的字面量，不能是变量；
//				3. case： 值不允许重复；
//				4. break：表示中断，结束的意思，结束该switch语句的执行；
//				5. default：所有情况都不匹配时，执行该处的语句体，可以写在switch内任意的位置，也可以省略不写；
//				6. case穿透，如果匹配到语句执行后没有break，从上往下穿；
//	三、循环结构
//		3.1 for 循环
//			格式：
//			for (初始化语句; 条件判断语句; 条件控制语句)
//			{
//				循环体语句;
//			}
//			细节：
//				1.循环外写初始化语句循环内不写，或循环外只定义不赋值，循环内赋值都可以;
//
//		3.2 while 循环
//			格式：
//			初始化语句;
//			while (条件判断语句)
//			{
//				循环体语句;
//				条件控制语句;
//			}
//
//		3.3 for与while循环区别
//			1.控制循环的变量在for循环结束后一般不能被访问了，而while循环由于直接定义在外面的可以直接访问;
//			2.for循环知道循环的次数或者范围;
//			3.while循环不知道循环的次数或者范围，只知道循环结束的条件;
//
//		3.4 do...while 循环
//			格式：
//			初始化语句;
//			do{
//				循环体语句;
//				条件控制语句;
//			} while (条件判断语句);
//
//		3.5 循环高级知识
//			（1）无限循环
//				（1.1）for循环的无限循环
//					for (;;)
//					{
//						循环体语句;
//					}
//
//				（1.2）while循环的无限循环
//					while (1)
//					{
//						循环体语句;
//					}
//				（1.3）do...while循环的无限循环
//					do{
//						循环体语句;
//					} while (1);
//			（2）跳转控制语句
//				break		-> 不能单独书写，只能写在switch或者循环中，表示结束、跳出循环的意思；
//				continue	-> 结束本次循环，进入下次循环
//				goto		-> 结合标号，可以跳转到代码中的任意地方。一般只用于跳出循环嵌套。标号格式：名字 : 代码块
//	*/
//	//int n;
//	//printf("请输入n=");
//	//scanf("%d", &n);
//	////打印1-n
//	//for (int i = 1;i <= n;i++)
//	//{
//	//	printf("%d\n", i);
//	//}
//	////打印n-1
//	//for (int i = n;i >= 1;i--)
//	//{
//	//	printf("%d\n", i);
//	//}
//	////获取1-n之间的和
//	//int sum1 = 0;
//	//for (int i = 1; i <= n;i++)
//	//{
//	//	sum1 += i;
//	//}
//	//printf("1-%d之间的和为%d\n", n, sum1);
//	////获取1-n之间的偶数和
//	//int sum2 = 0;
//	//for (int i = 1; i <= n;i++)
//	//{
//	//	if (i % 2 == 0)
//	//	{
//	//		sum2 += i;
//	//	}
//	//}
//	//printf("1-%d之间的偶数和为%d\n", n, sum2);
//
//	////统计满足条件m和n之间的数字
//	//int count = 0;
//	//int m;
//	//printf("请输入m=");
//	//scanf("%d", &m);
//	//for (int i = m;i <= n;i++)
//	//{
//	//	if (i % 6 == 0 && i % 8 == 0)
//	//	{
//	//		count++;
//	//	}
//	//}
//	//printf("%d-%d之间能同时被6和8整除的数有%d个\n", m, n, count);
//
//	//int j = 0;
//	//while (j <= 4)
//	//{
//	//	printf("我叶海坤爱刘佳文\n");
//	//	j++;
//	//}
//
//	//2的幂（给定整数判断是不是2的幂次方)
//	int num1;
//	printf("请输入一个判断是不是2的幂次方的数num1=");
//	scanf("%d", &num1);
//	printf("%d", num1);
//	while (num1%2==0)
//	{
//		num1 /= 2;
//	}
//	if (num1>1)
//	{
//		printf("不是2的次幂\n");
//	}
//	else if (num1 == 1)
//	{
//		printf("是2的次幂\n");
//	}
//
//	//打印折纸次数
//	float length = 0.1;
//	int count1 = 0;
//	while (length < 8844430)
//	{
//		length *= 2;
//		count1++;
//	}
//	printf("需要折叠%d次,此时厚度为%f\n", count1, length);
//
//	//长度为任意位数的整数反转
//	int n;
//	printf("请输入要反转的数n=");
//	scanf("%d", &n);
//		//获取数字位数
//	int digit = 1;
//	int m1 = n;
//	while (m1 / 10 != 0)
//	{
//		digit++;
//		m1 /= 10;
//	}
//		//获取数字反转
//	int reverse = 0;
//	int m2 = n;
//	while (m2 != 0)
//	{
//		//获取对应位数的基
//		int base = 1;
//		for (int i = 1;i < digit;i++)
//		{
//			base *= 10;
//		}
//		//对应位数*基
//		reverse += (m2%10)*base;
//		digit--;
//		//m2更新为除以10的整数商
//		m2 /= 10;
//	}
//	printf("%d的反转为%d\n",n, reverse);
//	
//	//x的平方根
//	int x;
//	printf("请输入要计算平方根的数x=");
//	scanf("%d", &x);
//	int root = 1;
//	while (root*root < x)
//	{
//		root++;
//	}
//	if (root * root != x) 
//	{
//		printf("%d的平方根为%d\n", x, root - 1);
//	}
//	else
//	{
//		printf("%d的平方根为%d\n", x, root);
//	}
//	
//	//判断是否是回文数
//	int num2;
//	printf("请输入要判断回文数的数num2=");
//	scanf("%d", &num2);
//	//获取数字位数
//	int digit1 = 1;
//	int m3 = num2;
//	while (m3 / 10 != 0)
//	{
//		digit1++;
//		m3 /= 10;
//	}
//	//获取数字反转
//	int reverse1 = 0;
//	int m4 = num2;
//	while (m4 != 0)
//	{
//		//获取对应位数的基
//		int base1 = 1;
//		for (int i = 1;i < digit1;i++)
//		{
//			base1 *= 10;
//		}
//		//对应位数*基
//		reverse1 += (m4 % 10) * base1;
//		digit1--;
//		//m2更新为除以10的整数商
//		m4 /= 10;
//	}
//	if (num2 == reverse1)
//	{
//		printf("%d是一个回文数\n", num2);
//	}
//	else
//	{
//		printf("%d不是一个回文数\n", num2);
//	}
//
//	//两数除法，不能用乘法、除法、取余运算
//	int dividend;
//	int divisor;
//	printf("请输入dividend divisor：");
//	scanf("%d %d", &dividend, &divisor);
//	int trade = 0;
//	printf("%d/%d的商为", dividend, divisor);
//	while (dividend-divisor>=0)
//	{
//		dividend -= divisor;
//		trade++;
//	}
//	printf("%d，余数为%d\n", trade, dividend);
//	
//	int p = 1;
//	do {
//		printf("%d\n", p);
//		p++;
//	} while (p <= 5);
//	
//
//}