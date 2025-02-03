//Oskar Matlak 2/2/2025
//ProblemSet1.Problem5
//output2.cpp

#include <iostream>
using std::cout;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main()
{
	int i=5, j=6, k=7, n=3;
	cout << i + j * k - k % n << "\n";
	cout << i / n << "\n";
	return 0;
}

//Predicted output #1:
/*
i + j * k - k % n
5 + 6 * 7 - 7 % 3
11 * 7 - 7 % 3
77 - 7 % 3
70 % 3
23.333 (2) (since it is an integer division, the result will be an integer)

i / n
5 / 3
1.666 (1) (since it is an integer division, the result will be an integer)
 */

//Actual output:
/*
46
1
*/

//What mistskes did I make?
/*
first output:
i+j*k-k%n
5+6*7-7%3
5+42-7%3
5+42-1
47-1
46 (correct)
I assumed that the code would run the operations in the order they were written, (like a caluculator when parentheses are not used)
but it actually ran the operations in the order of operations (Pemdas).

second output:
correct
*/

