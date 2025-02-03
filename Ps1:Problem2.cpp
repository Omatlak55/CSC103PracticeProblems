//Oskar Matlak 2/2/2025
//ProblemSet1.Problem2
//fix-me.cpp

/* TODO: fix all compiler errors in the following program (you can of course
 * use the compiler to check your work...) */
#include <iostream>
using std::cin;
using std::cout;
#include <limits.h>

int main()
{
	int m = INT_MIN;
	int x;

	while (true) {
		cin >> x; //fixed issue with cin (original code did not have semicolon at the end of the line)

		/* check if read into green was successful: */

		if (!cin.good()) {
            break; /* if read failed, exit the loop */
        }

		if (x > m) {
            m = x;
        } 
        //changed the formatting of the if statements to make it more readable
	}

	cout << "largest value was " << m << "\n"; // fixed issue with cout (original code used apostrophes'' instead of quotes"")
	return 0;
}