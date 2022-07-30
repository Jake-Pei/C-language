#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";//此字符串有结束标志\0
//	char arr2[] = { 'a','b','c' };//此字符串没有结束标志\0
//	char arr3[] = { 'a','b','c','\0' };
//	int len = strlen("abc");//计算字符串长度的函数strlen（string length）
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	return 0;
//
//
//}
//#include <stdio.h>
//int main()
//{
//    long int a;
//    float b, c, d;
//    scanf("%d", &a);
//    scanf("%f,%f,%f", &b, &c, &d);
//    printf("The each subject score of No. %d is %.2f, %.2f，%.2f", a, b, c, d);
//    return 0;
//}
#include <stdio.h>
int main()
{
    char a = 0;
    while ((a = getchar()) != EOF)
    {
        getchar();
        printf("%c\n", a + 32);
    }
    return 0;

}