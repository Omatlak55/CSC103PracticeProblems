/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	double num;
    double sum=0;
    double count=0;
    while(cin >> num)
    {
        sum += num;
        count++;
    }
    cout << "The average is: " << sum/count << "\n";

	return 0;
}
