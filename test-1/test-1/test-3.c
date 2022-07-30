//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////试验一下
////int main()
//{
//    int a = 12, b = 1;
//    int c = a - (b--);  // ①先执行a-b=12-1，所以c=11。然后在执行b--，所以这时的b=0；
//
//    int d = (++a) - (--b);  // ②此时b=0，d=（++a）-（--b）=（13）-（-1）=14，为什么（--b）会等于（-1）呢，以为前面的b=0，在自减就=-1
//
//    printf("c=%d, d=%d\n", c, d);
// 
//    return 0;
//}