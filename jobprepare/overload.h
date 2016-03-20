#ifndef _OVERLOAD_
#define _OVERLOAD_
#include <iostream>

namespace OVERLOAD
{
	class DfcBase
	{
	public:

		DfcBase(int a){
			this->a =a;
		}
		int a;

	};
	class DfceExtend:public DfcBase{
	public:
		DfceExtend():DfcBase(100){

		}
	};
	void func(DfcBase* a){
		cout<<"dfcbase"<<endl;
	}
	void func(DfceExtend* a){
		cout<<"DfceExtend"<<endl;
	}
	void funcBasep(DfcBase* a){
		cout<<"funcBasep(DfcBase* a)"<<endl;
	}
	void funcBasep(const DfcBase* a){
		cout<<"funcBasep(const DfcBase* a)"<<endl;
	}

	//void funcBase(const DfcBase* const a){
	//	cout<<"funcBase(const DfcBase* const a)"<<endl;
	//}
	//void funcBase(const DfcBase* const a){
	//	cout<<"funcBase(const DfcBase* const a)"<<endl;
	//}

	void funcBaseref(DfcBase& a){
		cout<<"funcBaseref(DfcBase& a)"<<endl;
	}
	void funcBaseref(const DfcBase& a){
		cout<<"funcBaseref(const DfcBase& a)"<<endl;
	}
	void funcBaseref(DfcBase a){
		cout<<"funcBaseref(DfcBase a)"<<endl;
	}
	void funcBaseobj(DfcBase a){
		cout<<"funcBaseobj(DfcBase a)"<<endl;
	}
	//void funcBaseobj(const DfcBase a){
	//	cout<<"funcBaseobj(const DfcBase a)"<<endl;
	//}

	void funcint(int a){cout<<"funcint(int a)"<<endl;}
	void funcint(int& a){cout<<"funcint(const int a)"<<endl;}
	void funcdouble(double a){cout<<"funcdouble(double a)"<<endl;}
	void funcdouble(double& a){cout<<"funcdouble(double& a)"<<endl;}
	class A{
	public:
		A(){};
		void foo(int test){ cout<<"foo(int test)"<<endl;};         //can be£ºint foo(A *this,int *test);
		void foo(int test) const{ cout<<"foo(int test) const"<<endl;};    //can be£ºint foo(const A *this,int *test);
	};

	void overloadtest()
	{
		DfceExtend dfextend;
		DfcBase dfebase(1);
		DfcBase& baseref = dfebase;
		const DfcBase dfebase2(1);
		func(&dfextend);
		func(&dfebase);
		funcBasep(&dfebase);
		funcBasep(&dfebase2);
		//funcBaseref(dfebase);
		//funcBaseref(dfebase2);
		//funcBaseref((DfcBase&)baseref);
		static_cast<void(*)(DfcBase&)>(funcBaseref)(baseref);
		int a =1;
		int& b =a;
		double dd;
		funcint(1);
		//funcint(b);
		funcdouble(a);
		//funcdouble(dd);
		A a1; a1.foo(1);
		const A b1; b1.foo(1);

	}

}

#endif