#include<iostream>

using namespace std;

#define MAX 1024

#define getsum(x,y) ((x)+(y))
//宏函数注意事项： 注意符号的完整性
//宏函数的优点：以空间换时间
//使用场景：频繁使用的短小函数，封装成宏函数
int main(int argc, char * argv[])
{
	cout << getsum(4, 5) << endl;
	return 0;
}
