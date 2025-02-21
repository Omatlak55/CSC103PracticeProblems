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
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << static_cast<double>(sum) / n << "\n";
    
    return 0;
}
