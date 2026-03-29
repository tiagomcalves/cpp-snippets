//	Tiago Alves 30/09/2021

/*
	isEven (const int& parameter)
	passes value by const reference

	When you put "const" in front of a parameter,
	it means that it cannot be modified in the function.

	So I can do this:
	
	isEven( MisteriousInteger )
	or
	isEven( 7 )	<- Won't compile if it isn't passed by const

	It has the efficiency of a reference parameter 
	and the security of a value parameter.
	
	http://web.eecs.utk.edu/~bmaclenn/Classes/102-S10/handouts/100318.pdf
*/

#include <iostream>

#include "test.h"

using namespace std;

int isEven (const int& parameter)
{
	return (!(parameter % 2));
}

int main()
{
	cout << "type a number:" << endl;
	int input{};
	cin >> input;

	if (isEven(input))	cout << "even number";
	else cout << "odd number";

	return 0;
}


