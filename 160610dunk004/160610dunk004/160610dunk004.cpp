// 160610dunk004.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CBase {
protected:
	int a;
public:
	CBase()
	{
		a = 0;
	}              //默认构造函数
	CBase(int c)
	{
		a = c;
	}              //单参数构造函数
	void display()
	{
		cout << "a=" << a << endl;
	}

};


class CDerived : public CBase
{
public:
	CDerived()
	{
		a = 0;
	}            //默认构造函数
	CDerived(int c)
	{
		a = c;
	}            //单参数构造函数

};


int main()
{
	CDerived obj(50);
		obj.display();
    return 0;
}

