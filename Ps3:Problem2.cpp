/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int small = INT_MAX;
	int small2nd = INT_MAX;
	int x;
	while (cin >> x)
	{
		if (x < small)
		{
			small2nd = small;
			small = x;
		}
		else if (x < small2nd && x != small)
		{
			small2nd = x;
		}
	}
	cout << small2nd << "\n";
	
	return 0;
}
