// jobprepare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "sizeof_test.h"
#include "sizeofclass.h"
#include "defaultconstructor_test.h"
#include "overload.h"
int _tmain(int argc, _TCHAR* argv[])
{
	SIZEOFTEST::testSizeof();  //1.
	//SIZEOFCLASS::testsizeofclass(); //2.
	//DEFAULT_CONSTRUCTOR::defaultconstructortest();//3
	//OVERLOAD::overloadtest();//4
	return 0;
}

