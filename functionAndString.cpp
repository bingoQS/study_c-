#include<iostream>
//#include<string>
#include<cstring>

using namespace std;
unsigned int getCharNum(const char* arr,char target) {
	int count = 0;

	//两种遍历方法
	//for (int i = 0; i < strlen(arr); i++)
	//{

	//}
	while (*arr != '\0')
	{
		if (*arr == target)
			count++;
		arr++;
	}
	return count;
}
int main()
{
	//字符串的三种形式：字符数组、char *、字符串常量。
	char arr[15] = "hello world";
	const char* str = "hello world";

	int n1 = strlen(arr);//11
	int n2 = strlen(str);//11
	int n3 = strlen("hello world");//11
	cout << n1 << endl ;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << sizeof(arr) << endl;//15
	cout << sizeof(str) << endl;//4
	cout << sizeof("hello world") << endl;//12

	cout << getCharNum(str,'l') << endl;
	return 0;
}
