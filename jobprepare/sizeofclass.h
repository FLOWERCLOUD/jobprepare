#ifndef _SIZEOFCLASS_TEST_
#define _SIZEOFCLASS_TEST_
#include "iostream"
using namespace std;

namespace SIZEOFCLASS
{
	class Concrete1{
		int val;
		char bit1;
	};
	class Concrete2: public Concrete1{
		char bit2;
	};
	class Concrete3: public Concrete2{
		char bit3;
	};


	class X{};
	class Y: public virtual X{};
	class Z: public virtual X{};
	class A: public Y ,public Z{};

	class X1{
		int a;
		char b;
	};
	class Y1: public virtual X1{
		int c;
	};
	class Z1: public virtual X1{
		int d;
	};
	class A1: public Y1 ,public Z1{
		int e;
	};

	class X2{
		int a;
		char b;
		virtual void g(){}
	};
	class Y2: public virtual X2{
		int c;
		virtual void g(){}
	};
	class Z2: public virtual X2{
		int d;
		virtual void g(){}
	};
	class A2: public Y2 ,public Z2{
		int e;
		virtual void g(){}
	};

	void testsizeofclass()
	{
		Concrete1 c1;
		Concrete2 c2;
		Concrete3 c3;
		cout<<"sizeof(c1): "<<sizeof(c1)<<endl;
		cout<<"sizeof(c2): "<<sizeof(c2)<<endl;
		cout<<"sizeof(c3): "<<sizeof(c3)<<endl;
		cout<<endl;
		X x;
		Y y;
		Z z;
		A a;
		cout<<"sizeof(x): "<<sizeof(x)<<endl;
		cout<<"sizeof(y): "<<sizeof(y)<<endl;
		cout<<"sizeof(z): "<<sizeof(z)<<endl;
		cout<<"sizeof(a): "<<sizeof(a)<<endl;
		cout<<endl;
		X1 x1;
		Y1 y1;
		Z1 z1;
		A1 a1;
		cout<<"sizeof(x1): "<<sizeof(x1)<<endl;
		cout<<"sizeof(y1): "<<sizeof(y1)<<endl;
		cout<<"sizeof(z1): "<<sizeof(z1)<<endl;
		cout<<"sizeof(a1): "<<sizeof(a1)<<endl;
		cout<<endl;
		X2 x2;
		Y2 y2;
		Z2 z2;
		A2 a2;
		cout<<"sizeof(x2): "<<sizeof(x2)<<endl;
		cout<<"sizeof(y2): "<<sizeof(y2)<<endl;
		cout<<"sizeof(z2): "<<sizeof(z2)<<endl;
		cout<<"sizeof(a2): "<<sizeof(a2)<<endl;



	}


}





#endif