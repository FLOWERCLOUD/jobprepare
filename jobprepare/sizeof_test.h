#ifndef _SIZEOF_TEST_
#define _SIZEOF_TEST_
#include "iostream"
using namespace std;
namespace SIZEOFTEST
{
	int f1_sizeof( char* addr)
	{
		return sizeof(addr);
	}
	int f1_strlen( char*addr)
	{
		return strlen(addr);
	}
	int f2_sizeof( char addr[8] )
	{
		return sizeof(addr);
	}
	int f2_strlen( char addr[])
	{
		return strlen(addr);
	}
	//int _tmain(int argc, _TCHAR* argv[])
	//{
	void testSizeof()
	{
		//1. char type
		char array1[8] = "hello";
		char* array2 = "hello";
		char array3[] = "hello";

		cout<<"int f1_sizeof(char* addr)\n{\n return sizeof(addr);\n}\n"<<endl;
		cout<<"int f2_sizeof(char[8] addr)\n{\n return sizeof(addr);\n}\n"<<endl;
		cout<<"int f1_strlen(char* addr)\n{\n return strlen(addr);\n}\n"<<endl;
		cout<<"int f2_strlen(char* addr)\n{\n return strlen(addr);\n}\n"<<endl;
		cout<<endl;
		cout<<"char array1[8] = \"hello\";\nchar* array2 = \"hello\";\nchar array3[] = \"hello\";"<<endl;
		cout<<endl;
		cout<<"sizeof(array1): "<<sizeof(array1)<<endl;
		cout<<"sizeof(array2): "<<sizeof(array2)<<endl;
		cout<<"sizeof(array3): "<<sizeof(array3)<<endl;
		cout<<"sizeof(\"hello\"): "<<sizeof("hello")<<endl;
		cout<<"strlen(\"hello\"): "<<strlen("hello")<<endl;
		cout<<"strlen(array1): "<<strlen(array1)<<endl;
		cout<<"strlen(array2): "<<strlen(array2)<<endl;
		cout<<"strlen(array3): "<<strlen(array3)<<endl;
		cout<<endl;
		cout<<"f1_sizeof(array1): "<<f1_sizeof(array1)<<endl;
		cout<<"f2_sizeof(array1): "<<f2_sizeof(array1)<<endl;
		cout<<"f1_sizeof(array2): "<<f1_sizeof(array2)<<endl;
		cout<<"f2_sizeof(array2): "<<f2_sizeof(array2)<<endl;
		cout<<"f1_strlen(array1): "<<f1_strlen(array1)<<endl;
		cout<<"f2_strlen(array1): "<<f2_strlen(array1)<<endl;
		cout<<"f1_strlen(array2): "<<f1_strlen(array2)<<endl;
		cout<<"f2_strlen(array2): "<<f2_strlen(array2)<<endl;
		cout<<endl;

		//2. int type
		int iarray1[8] = {1 ,2 ,3 ,4};	
		int iarray2[] = {1 ,2 ,3 ,4};
		int* iarray3 = iarray2;
		float* iarray4 = new float[8];
		cout<<"int iarray1[8] = {1 ,2 ,3 ,4};\nint iarray2[] = {1 ,2 ,3 ,4};\n"<<
			"int* iarray3 = iarray2;\nfloat* iarray4 = new float[8];\n"<<endl;
		cout<<endl;
		cout<<"sizeof(iarray1): "<<sizeof(iarray1)<<endl;
		cout<<"sizeof(iarray2): "<<sizeof(iarray2)<<endl;
		cout<<"sizeof(iarray3): "<<sizeof(iarray3)<<endl;
		cout<<"sizeof(iarray4): "<<sizeof(iarray4[0])<<endl;
		cout<<endl;


		//3 struct ,union
		struct sa
		{
			char a;
			int b;

		}saobj ;
		struct sb
		{
			int a;
			char b;

		}sbobj;
		union union_a
		{
			char a;
			int b;
			struct sa;
		}union_aobj;
		union union_b
		{
			char a;
			int b;
			struct sa obj;

		}union_bobj;
		cout<<"struct sa{\n char a;\n int b;\n}saobj;\nstruct sb{\n int a;\n char b;\n}sbobj;\n"<<endl;
		cout<<"union union_a{\n char a\n int b;\n struct sa;\n}union_aobj;\n"<<endl;
		cout<<"union union_b{\n char a\n int b;\n struct sa obj;\n}union_bobj;\n"<<endl;

		sa& ref_sa = saobj;
		sa* p_sa = &saobj;
		cout<<"sa& ref_sa = saobj;"<<endl;
		cout<<"sa* p_sa = &saobj;"<<endl;
		cout<<endl;
		cout<<"sizeof(sa): "<<sizeof(sa)<<endl;
		cout<<"sizeof(saobj): "<<sizeof(saobj)<<endl;
		cout<<"sizeof(sb): "<<sizeof(sb)<<endl;
		cout<<"sizeof(sbobj): "<<sizeof(sbobj)<<endl;
		cout<<"sizeof(ref_sa): "<<sizeof(ref_sa)<<endl;
		cout<<"sizeof(p_sa): "<<sizeof(p_sa)<<endl;
		cout<<"sizeof(p_sa): "<<sizeof(p_sa)<<endl;
		cout<<"sizeof(union_aobj)"<<sizeof(union_aobj)<<endl;
		cout<<"sizeof(union_bobj)"<<sizeof(union_bobj)<<endl;
		cout<<endl;
		//class type
		class A
		{

		} aobj;
		class AA{
			char a;
			char b;
		} aaobj;
		class B
		{
			int m;
		} bobj;
		class C
		{
			int m;
			char n;
		}cobj;
		class D
		{
			char m;		
			int n;
			char k;

		}dobj;
		class D_f
		{
			char m;
			int n;
			void f1(){}
		}d_fobj;
		class D_fv
		{
			char m;
			int n;
			virtual void f1(){};
			virtual void f2(){};
		}d_fvobj;
		class DD_fv:public D_fv{
			char m;
			int  n;
			virtual void f1(){};
			virtual void f2(){};
		}dd_fvobj;
		class VirExtend :virtual public D_f
		{

		}veobj;
		class VirExtend2 :virtual public D_fv
		{

		}veobj2;

		cout<<"sizeof(aobj):"<<sizeof(aobj)<<endl; 
		cout<<"sizeof(aaobj):"<<sizeof(aaobj)<<endl; 
		cout<<"sizeof(bobj):"<<sizeof(bobj)<<endl; 
		cout<<"sizeof(cobj):"<<sizeof(cobj)<<endl; 
		cout<<"sizeof(dobj):"<<sizeof(dobj)<<endl; 
		cout<<"sizeof(d_fobj):"<<sizeof(d_fobj)<<endl; 
		cout<<"sizeof(d_fvobj):"<<sizeof(d_fvobj)<<endl; 
		cout<<"sizeof(dd_fvobj):"<<sizeof(dd_fvobj)<<endl; 
		cout<<"sizeof(veobj):"<<sizeof(veobj)<<endl; 
		cout<<"sizeof(veobj2):"<<sizeof(veobj2)<<endl; 
		cout<<endl; 
		cout<<"content of csapp"<<endl;
		struct P1{
			int i;
			char c;
			int j;
			char d;			
		} p1obj;
		struct P2{
			int i;
			char c;
			char d;
			int j;
		} p2obj;
		struct P3{
			short w[3];
			char c[3];
		} p3obj;
		struct P4{
			short w[3];
			char* c[3];
		} p4obj;
		struct P5{
			struct P1 a[2];
			struct P2* P;
		} p5obj;

		struct P6{
			char* a;
			short b;
			double c;
			char d;
			float e;
			char f;
			long long g;
			void *h;
		}p6obj;
		struct P7{
			double c;
			long long g;
			float e;
			char* a;
			void *h;
			short b;			
			char d;			
			char f;
		}p7obj;
		struct P8{			
			double c;
			char a;
			
		}p8obj;
		struct P9{	
			char a;
			double c;
		}p9obj;
		struct k1{
			int m;
			char a;
			char l;
		}k1obj;
		struct k2{
			 struct k1 m;
			char a;
		}k2obj;
		struct k3{
			struct k2 m;
			char a;
		}k3obj;
		class Basek1{
			double m;
			char a;
		}basek1;
		class Basek2:public Basek1{
			char a;
		}basek2;
		class Basek3:Basek2{
			char a;
		}basek3;


		cout<<"sizeof(p1obj):"<<sizeof(p1obj)<<endl; 
		cout<<"sizeof(p2obj):"<<sizeof(p2obj)<<endl; 
		cout<<"sizeof(p3obj):"<<sizeof(p3obj)<<endl; 
		cout<<"sizeof(p4obj):"<<sizeof(p4obj)<<endl; 
		cout<<"sizeof(p5obj):"<<sizeof(p5obj)<<endl; 
		cout<<"sizeof(p6obj):"<<sizeof(p6obj)<<endl; 
		cout<<"sizeof(p7obj):"<<sizeof(p7obj)<<endl; 
		cout<<"sizeof(p8obj):"<<sizeof(p8obj)<<endl; 
		cout<<"sizeof(p9obj):"<<sizeof(p9obj)<<endl; 
		cout<<"sizeof(k1obj):"<<sizeof(k1obj)<<endl; 
		cout<<"sizeof(k2obj):"<<sizeof(k2obj)<<endl; 
		cout<<"sizeof(k3obj):"<<sizeof(k3obj)<<endl; 
		cout<<"sizeof(basek1):"<<sizeof(basek1)<<endl; 
		cout<<"sizeof(basek2):"<<sizeof(basek2)<<endl; 
		cout<<"sizeof(basek3):"<<sizeof(basek3)<<endl; 

	}




}

//}

#endif