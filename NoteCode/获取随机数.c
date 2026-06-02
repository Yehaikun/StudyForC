//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>;
//#include <stdlib.h>;
//#include <time.h>;
//
//void add(int n1, int n2)
//{
//	int result = n1 + n2;
//	printf("%d\n", result);
//}
//
//int main()
//{
//	/*
//	随机数获取：线性同余方程 Xn+1 = a*Xn + b mod m X1是种子 a=3, 
//	srand(); ->设置种子
//	rand();	 ->获取随机数
//	*/
//	srand(time(NULL));
//	for (int i = 1;i <= 1000;i++)
//	{
//		int a = rand() % 22 + 17;
//		if (a == 17)
//		{
//			printf("%d\n", a);
//			break;
//		}
//		else
//		{
//			printf("%d\n", a);
//		}
//	}
//
//	return 0;
//}