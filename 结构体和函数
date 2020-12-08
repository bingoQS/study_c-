#include<iostream>

using namespace std;

//函数和结构体
struct my_time {
	int hours;
	int mins;
};

//案例：A-B的时间：2小时30分钟，B-A的时间1小时40分钟，利用含有结构体的函数求时间和
//缺点：如果结构体很大，会导致内存消耗过大
//可以传递指针，则不用给结构体开辟临时的空间
my_time addTime(my_time t1, my_time t2)
{
	my_time tmp;
	tmp.mins = (t1.mins + t2.mins) % 60;
	tmp.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / 60;
	return tmp;
}

my_time addTime1(my_time *t1, my_time *t2)
{
	my_time tmp;
	tmp.mins = (t1->mins + t2->mins) % 60;
	tmp.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / 60;
	return tmp;
}
void printfMy_time(my_time t)
{
	cout << "总时间为：" << t.hours << "小时 " << t.mins << "分钟"<<endl;
}
int main()
{
	my_time t1 = { 2,30 };
	my_time t2 = { 1,40 };
	my_time res = addTime1(&t1, &t2);
	printfMy_time(res);
	return 0;
}
