// jobprepare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "iostream"
using namespace std;
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
int _tmain(int argc, _TCHAR* argv[])
{
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

	return 0;
}

