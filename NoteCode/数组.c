////头文件，依次为设置无警告输入函数、io文件、获取随机数的lib文件、获取时间的time文件
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <windows.h>
//
////声明函数
//void printArr(int arr[], int len);
//int findMax(int arr[], int len);
//int findMin(int arr[], int len);
//int sum(int arr[], int len);
//int isInArray(int array[], int len, int target);
//void sortBubble(int array[], int len);
//void sortSelection(int array[], int len);
//void sortInsertion(int array[], int len);
//void reverseArray(int array[], int len);
//void disrangeArray(int array[], int len);
//int searchBasic(int array[], int len, int target);
//int searchBinary(int array[], int len, int target);
//
//int main()
//{
//	/*
//	数组:是一种容器，可以用来存储同种数据类型的多个值
//
//	数组的定义：
//					数据类型 数组名[长度];
//					1.数组存放的小空间是连续的空间
//					2.数组一旦定义，长度不可改变
//					3.定义后为赋值，默认初始化：整数初始化值为0，小数为0.0，字符'\0'，字符串NULL
//
//	数组的初始化：
//					数据类型 数组名[长度] = {元素1, 元素2, ..., 元素n}; -> 元素个数<=长度才行，否则报错
//					数据类型 数组名[] = {元素1, 元素2, ..., 元素n};     -> 元素个数就是数组的长度（长度初始化时可省略）
//
//
//	数组的元素访问：
//					获取：数组名[索引];   -> 索引从0开始
//					修改：数组名[索引] = 新元素;
//
//	数组的遍历：依次获取数组中的每一个元素
//
//
//	内存中的数组：
//					内存：软件运行时，用来存储临时数据的。一个字节=8个二进制 0000 0000
//					内存地址：内存中每一个小格子的编号
//					作用：快速的管理内存空间
//					32位系统：以32位的二进制表示
//					64位系统：以64位的二进制表示
//					C语言中数的内存地址的首地址，即数据占用的第一个字节的地址，数据存放在内存中的位置由编译器统一分配
//					获取地址：&变量名;
//					数组的内存地址：数组的内存地址是数组中第一个元素的首地址（即第一个元素的第一个占用字节的地址）
//					索引：相对于首地址的偏移量
//					数组的长度计算：
//									总长度/数据类型中占用的字节个数
//					1字节=8 bit = 2位16进制
//					8字节=64 bit = 16位16进制
//					64位操作系统以64 bit表示数据，高位补0
//					因为1指针=8字节，所以1指针=16位16进制数
//
//	数组的常见问题：
//
//	二维数组：
//	*/
//
//	// 声明计时变量
//	LARGE_INTEGER frequency, start, end;
//	double interval;
//
//	// 获取计时器频率
//	QueryPerformanceFrequency(&frequency);
//
//	// 开始计时
//	QueryPerformanceCounter(&start);
//	//-------------代码开始--------------
//
//	int arr[10] = { 3, 21,43, 55, 56 , 78, 191, 234, 333, 400};
//	int len = sizeof(arr) / sizeof(int);
//	int index = searchBinary(arr, len, 56);
//	printf("%d\n", index);
//	//-------------代码结束--------------
//
//	// 结束计时
//	QueryPerformanceCounter(&end);
//
//	// 计算时间差（秒）
//	interval = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;
//
//	printf("程序运行时间: %.6f 秒\n", interval);
//	printf("程序运行时间: %.3f 毫秒\n", interval * 1000);
//	printf("程序运行时间: %.3f 微秒\n", interval * 1000000);
//
//	return 0;
//}
//
////遍历打印数组
//void printArr(int arr[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////求整数数组中最大值
//int findMax(int arr[], int len)
//{
//	int max = arr[0];
//	for (int i = 1; i < len;i++)
//	{
//		max = arr[i] > max ? arr[i] : max;
//	}
//	return max;
//}
//
////求整数数组中最小值
//int findMin(int arr[], int len)
//{
//	int min = arr[0];
//	for (int i = 1; i < len;i++)
//	{
//		min = arr[i] > min ? min : arr[i];
//	}
//	return min;
//}
//
////求整数数组和
//int sum(int arr[], int len)
//{
//	int sum = arr[0];
//	for (int i = 1; i < len;i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//
////判断数组是否存在目标数target
//int isInArray(int array[], int len, int target)
//{
//	for (int i = 0;i < len;i++)
//	{
//		if (array[i] == target)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
////数组冒泡排序打印
//void sortBubble(int array[], int len)
//{
//	for (int i = 1; i < len;i++)
//	{
//		for (int j = 0;j < len - i;j++)
//		{
//			if (array[j] > array[j + 1])
//			{
//				int mid = array[j];
//				array[j] = array[j + 1], array[j + 1] = mid;
//			}
//		}
//	}
//	printArr(array,len);
//}
//
////数组选择排序打印
//void sortSelection(int array[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		int min = array[i];
//		int index=i;
//		for (int j = i+1; j < len;j++)
//		{
//			if (array[j] < min)
//			{
//				min = array[j], index = j;
//			}
//		}
//		int mid = array[i];
//		array[i] = min, array[index] = mid;
//	}
//	printArr(array, len);
//}
//
////数组插入排序打印
//void sortInsertion(int array[], int len)
//{
//	for (int i = 1;i < len;i++)
//	{
//		int i_copy = i;
//		for (int j = i-1;j >=0;j--)
//		{
//			if (array[i_copy] < array[j])
//			{
//				int mid = array[j];
//				array[j] = array[i_copy], array[i_copy] = mid, i_copy = j;
//			}
//		}
//	}
//	printArr(array,len);
//}
//
////反转数组
//void reverseArray(int array[], int len)
//{
//	for (int i = 0,j=len-1;i < j;i++,j--)
//	{
//		int mid = array[i];
//		array[i] = array[j], array[j] = mid;
//	}
//	printArr(array, len);
//}
//
////打乱数组
//void disrangeArray(int array[], int len)
//{
//	srand(time(NULL));
//	for (int i = 0;i < len;i++)
//	{
//		int random = rand() % len;
//		int mid = array[i];
//		array[i] = array[random], array[random] = mid;
//	}
//	printArr(array, len);
//}
//
////基本查找
//int searchBasic(int array[], int len, int target)
//{
//	for (int i = 0;i < len;i++)
//	{
//		if (array[i] == target)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////二分查找
//int searchBinary(int array[], int len, int target)
//{
//	int min = 0;
//	int max = len-1;
//	int mid = max/2;
//	while (min<=max)
//	{
//		int mid = (max + min) / 2;
//		//int mid = min+((target-array[min])/(array[max]-array[min]))*(max-min); ->即为插值查找
//		if (array[mid] > target)  // {1, 3, 5, 7, 9, 11, 12, 15, 18, 20};
//		{
//			max = mid - 1;
//		}
//		else if (array[mid] == target)
//		{
//			return mid;
//		}
//		else
//		{
//			min = mid + 1;
//		}
//	}
//	return -1;
//}