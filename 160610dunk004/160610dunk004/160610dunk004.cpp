// 160610dunk004.cpp : �������̨Ӧ�ó������ڵ㡣
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
	}              //Ĭ�Ϲ��캯��
	CBase(int c)
	{
		a = c;
	}              //���������캯��
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
	}            //Ĭ�Ϲ��캯��
	CDerived(int c)
	{
		a = c;
	}            //���������캯��

};


int main()
{
	CDerived obj(50);
		obj.display();
    return 0;
}

