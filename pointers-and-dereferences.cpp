//	Tiago Alves 17/10/2021

/*
	Some pointers and dereferences
	
	https://twitter.com/rep_stosq_void/status/1446504706319294475
*/


#include <iostream>


using namespace std;

void f(int* a)
{
	void* p = &a;
	***(int* (*)[])p = 1;
}

int main()
{
	int what{ 2 };
	int* p_what{ &what };

	cout << "what: " << what << endl;

	cout << "p_what: " << p_what << endl;


	cout << "*p_what: " << *p_what << endl;

	//
	cout << "------------" << endl;

	f(&what);

	cout << "what after f(): " << what << endl;

	f(p_what);

	cout << "p_what after f(): " << p_what << endl;
	cout << "*p_what after f(): " << *p_what << endl;

	return 0;
}

