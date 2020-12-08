#include<iostream>

using namespace std;

//递归，函数中调用自己，拆分，合并
//递归要有结束条件
int jiecheng(int n)
{
	if (n == 1)
		return 1;
	else
		return n * jiecheng(n - 1);
}

//递归案例
/*
。。。
*/
int tuzi(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return tuzi(n - 1) + tuzi(n - 2);
}
int tuzi1()
{
	//方法一：循环+数组
	int arr[20];

	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < 20; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[19];
}
int main()
{
	cout << tuzi(20)<< endl;
	cout << "-----------------"<<endl;
	cout<<tuzi1()<<endl;
	return 0;
}
