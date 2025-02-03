//Oskar Matlak 2/2/2025
//ProblemSet1.Problem4
//output.cpp

#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main() {
	int n;
	cout << (n = 4) << endl;
	cout << (n == 4) << endl;
	cout << (n > 3) << endl;
	cout << (n < 4) << endl;
	cout << (n = 0) << endl;
	cout << (n == 0) << endl;
	cout << (n > 0) << endl;
	//cout << (n && 4) << endl;
	//cout << (n || 4) << endl;
	cout << (!n) << endl;
    return 0;
}

//Predicted output #1:
/*
4 (sets n to 4)
1 (checks if n is equal to 4)
1 (checks if n is greater than 3) (1=true)
0 (checks if n is less than 4) (0=false)
0 (sets n to 0)
1 (checks if n is equal to 0) (1=true)
1 (checks if n is greater than 0) (1=true)
0 (checks if n is true and 4 is true) (0=false)
1 (checks if n is true or 4 is true) (1=true)
0 (checks if n is false) (0=false)
*/

//Predicted output #2: (after running the program)
//(Program did not compile and run because of invalid operands (lines 22 and 23))
/*
4
1
1
0
0
1
0
error: invalid operands of types 'int' and 'int' to binary 'operator&&'
error: invalid operandsc of types 'int' and 'int' to binary 'operator||'
0
*/

//Actual output:
/*
4
1
1
0
0
1
0
error: invalid operands of types 'int' and 'int' to binary 'operator&&'
error: invalid operandsc of types 'int' and 'int' to binary 'operator||'
1 (checks if n is false) (1=true) since n is 0 (aka false) !n will return true (1)
*/