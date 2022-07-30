//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	//输入10个整数
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//找最大值
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];//如果有值比前一个max大 就更新max
//		}
//	}
//
//	//输出
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//
//	printf("max=%d\n", max);
//	return 0;
//}