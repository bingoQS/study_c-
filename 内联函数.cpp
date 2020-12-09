#include<iostream>
using namespace std;

//定义宏函数
#define GETSUM(a,b) ((a)+(b))
#define COMPARE(a,b) ((a)<(b))?(a):(b)

//宏函数的缺陷1：需要加上括号保证运算的完整性

//定义一个普通函数
int compare(int a, int b)
{
	return a < b ? a : b;
}

//内联函数本质也是一个普通的函，解决了宏函数的缺陷
//内联函数定义必须在函数声明和函数定义上都加上inline关键字
inline int fun();
inline int fun()
{
	cout << "fun ..." << endl;
}
/*
*       某些情况编译器不会做内联编译
*       1.不能存在任何形式的循环语句
*       2.不能存在任何形式的判断语句
*       3.函数体不能太大
*       4.不能对函数进行取地址操作
*/

int main()
{
	return 0;
}
