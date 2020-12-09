#include<iostream>
using namespace std;

//引用
/*
*    1.取别名
*    2.引用必须初始化
*    3.数组的引用
*    4.引用的本质：通过指针常量实现
*    5.引用一旦初始化就奴能改变
*/

int main()
{
	//3.数组的引用
	int arr[3] = { 1,2,3 };
	int(&rarr)[3] = arr;
	rarr[1] = 100;
	cout << arr[1] << endl;

	//4.引用的本质：通过指针常量实现
	int a = 10;
	int& aref = a; //int* const aref = &a;
	aref = 20;     //*aref=20;
	return 0;
}
