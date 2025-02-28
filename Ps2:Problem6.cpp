#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: investigate the following questions (by writing a bit
	 * of code here and then compiling and running it):
	 * 1. What happens if you assign a floating point value to an
	 *    integer variable?
	 * 2. What about assigning an integer to floating point?  Can
	 *    you think of any way it could go wrong?  (Here, "wrong"
	 *    means "surprising" or unintuitive.)  Hint: read the
	 *    IEEE format and you'll see that you might have issues
	 *    with large integers.
	 * 3. What type of result do you get when adding or multiplying
	 *    floating point values with integers? */

	int i = 1.5;
	cout << i << "\n";
	double d = 1;
	cout << d << "\n";
	double e = 1.5;
	cout << d + e << "\n";
	return 0;
}

// When run output is:
// 1 (because a floating point value is being assigned to an integer variable it is rounded down to the nearest integer)
// 1 (because an integer is being assigned to a floating point variable it is converted to a floating point value)
// 2.5 (because a floating point value is being added to an integer value the integer value is converted to a floating point value and then added together)

// vim:foldlevel=2
