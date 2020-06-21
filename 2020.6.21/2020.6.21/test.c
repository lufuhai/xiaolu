#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 3;
	b = 7;
	printf("the first number is:%d\n", a);
	printf("the second number is:%d\n", b);
	c = a + 10;
	printf("the first number add 10 is:%d\n", c);
	c = b + 10;
	printf("the second number add 10 is:%d\n", c);
	c = a + b;
	printf("the result number of first add second is:%d", c);
	return 0;
}



//#include<stdio.h>
//void Add()
//{
//	static int a = 3;
//	a = 3 * a;
//	printf("%d\n", a);
//}
//int main()
//{
//	printf("第一次调用:");
//	Add();
//	printf("第二次调用:");
//	Add();
//	return 0;
//
//}





/*
2
#include<stdio.h>
int main()
{
	int a = 18;
	char b = 28;
	float c = 37;
	double result = a + b + c;
	printf("%f\n",result);
	return 0;

}

1
#include<stdio.h>
int main()
{
	extern int a;
	printf("a=%d\n", a);
	return 0;
}
#include<stdio.h>
int a = 90;
*/
