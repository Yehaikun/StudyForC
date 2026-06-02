//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>;
//int main()
//{	
//	/*
//	\t：制表符，长度可变的大空格
//		原理：会根据前面字母的个数在后面补空格，让整体的长度变成8或者8的倍数，最少补一个，最多补8个
//		作用：打印表格数据时，可以让数据对齐
//	abc\t		->补5个
//	zhangsan\t	->补8个
//	张\t		->补6个	
//	*/
//	for (int i = 1;i <= 9; i++)
//	{
//		for (int j = 1; j <= i;j++)
//		{
//			printf("%d*%d=%d\t", j,i, i*j);
//		}
//		printf("\n");
//	}
//	printf("name\t\tage\tgender\thobby\n");
//	printf("zhangsan\t23\t男\t篮球");
//	return 0;
//}