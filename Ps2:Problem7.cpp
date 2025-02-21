/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int sum = 0;
	while(true)
	{
		int x;
		cin >> x;
		if (cin.good() == false)
			break;
		else
		sum += x;
	}
	cout << "The sum is:" << sum << "\n";
}

// vim:foldlevel=2
