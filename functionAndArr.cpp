#include<iostream>

using namespace std;

//定义一个函数，遍历二维数组，方法一；
void printfArr1(int arr[][3], int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

//定义一个函数，遍历二维数组，方法二，指针,注意括号
void printfArr2(int (*arr)[3], int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

//定义一个元素，计算元素的和,数组的元素地址是连续的。
void getSum(int* arr, int row, int col)
{
	int sum = 0;
	for (int i = 0; i < row * col; i++)
	{
		sum += *arr;
		arr++;
	}
	cout << sum << endl;
}
int main()
{
	int arr[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
	
	//遍历二维数组的元素
	//计算二维数组的元素个数
	int count = sizeof(arr) / sizeof(arr[0]);
	cout << count << endl;

	printfArr1(arr, count);
	cout << "--------------------" << endl;
	printfArr2(arr, count);

	getSum(&arr[0][0], count, 3);
	getSum(arr[0], count, 3);
	return 0;
}
