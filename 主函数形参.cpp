#include<iostream>

using namespace std;

//主函数传参
//int main(int argc,char * argv[])
//int main(int argc, char ** argv)
// argc -> argument count
// argv -> argument vector
// argc: 参数的个数； argv：各参数的名字

int main(int argc, char * argv[])
{
	cout << argc << endl;
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	return 0;
}
