#ifndef _DEFAUTCONSTRUCTOR_TEST_
#define _DEFAUTCONSTRUCTOR_TEST_
#include "iostream"
using namespace std;
namespace DEFAULT_CONSTRUCTOR{


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
	
	void defaultconstructortest()
	{
		DfceExtend dfextend;
		DfcBase dfebase(1);
		DfcBase& baseref = dfebase;
		const DfcBase dfebase2(1);
		
	}

}

#endif