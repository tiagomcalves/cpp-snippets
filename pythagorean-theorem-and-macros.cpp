//	Tiago Alves 17/10/2021
//	updated in 17/09/2022

/*
	Pythagorean Theorem on a function

	a^2 + b^2 = x
	<=> c = sqrt(x)

	https://en.wikipedia.org/wiki/Pythagorean_theorem

	Also, good read
	https://stackoverflow.com/questions/2940367/what-is-more-efficient-using-pow-to-square-or-just-multiply-it-with-itself
*/

#include <iostream>
#include <cmath>

constexpr float Pythagoras(float fa, float fb)
{
	return sqrt((fa * fa) + (fb * fb));
}

int main()
{
	printf("%f\n", Pythagoras(2, 2));

    // Macros are dangerous
#define PYTHAGORAS(A,B) 	sqrt((A*A)+(B*B))      //  This looks fine    
	printf("%f\n", PYTHAGORAS(2, 2));              //  and seems to work fine

    // but this
	printf("%f\n", PYTHAGORAS(1+1, 1+1));
    // is the same as this, due to macro expansion and arithmetic operator precedence
    // 1+1*1+1 = 3
    // so it would be the same as this
	printf("%f\n", Pythagoras(sqrt(3), sqrt(3)));

#undef PYTHAGORAS
#define PYTHAGORAS(A,B) 	sqrt(((A)*(A))+((B)*(B)))  //  fixed but way convoluted    
	printf("%f\n", PYTHAGORAS(1+1, 1+1));
    
	return 0;
}