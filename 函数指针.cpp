#include<iostream>
#include<ctime>
using namespace std;

//函数指针
//函数的名字就是函数的地址

//函数地址的获取 函数名
//函数指针的声明
//函数指针的使用
//函数指针的案例

//定义一个函数
int getSum(int a, int b)
{
	return a + b;
}
int getSum1(int a, int b)
{
	return a + b;
}
//案例：输出函数运行的时间
//如果需要输出多个 函数参数相同的函数的调用时间，为了提高代码的复用性，使用函数指针进行喜欢惨。
void estimate(int (*pf)(int , int ))
{
	clock_t start = clock();
	(*pf)(1, 3);
	clock_t end = clock();
	cout << end - start << endl;
}

int main(int argc, char * argv[])
{
	//cout << getSum<<endl;
	//int (*pf)(int, int);
	//pf = getSum;
	//cout << (*pf)(1, 3) << endl;
	//cout << pf(1, 3) << endl;
	estimate(getSum);
	return 0;
}
