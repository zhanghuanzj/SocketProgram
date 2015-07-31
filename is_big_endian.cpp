#include<iostream>
using namespace std;
bool is_big_endian()
{
	union num
	{
		int n;
		char p[4];
	};
	num test;
	test.n = 0x04030201;
	if (test.p[0]==4)
	{
		cout<<"big-endian"<<endl;
		return true;
	}
	else
	{
		cout<<"little-endian"<<endl;
		return false;
	}
}
int main()
{
	bool is_big = is_big_endian();
	cout<<is_big<<endl;
	return 0;
}