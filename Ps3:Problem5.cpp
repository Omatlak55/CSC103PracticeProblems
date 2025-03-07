/* TODO: write a program that reads an integer b (say b < 10), and
 * another integer n, and then prints a string that represents the
 * integer n in base b.  E.g., if b=7 and n=94, your program would
 * output digits "163", as 94 = 1*49 + 6*7 + 3.  ("361" is also ok if
 * you print the least significant digit first).  Or if b=2 and n=7,
 * then you would print "111" since 7 = 1*4 + 1*2 + 1. */

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
    int b, n;
    cout << "Enter base (b < 10): ";
    cin >> b;
    cout << "Enter number to convert: ";
    cin >> n;

    if (n == 0) {
        cout << "0\n";
        return 0;
    }

    vector<int> digits;
    while (n > 0)
    {
        digits.push_back(n % b);
        n /= b;
    }

    for(int i = digits.size() - 1; i >= 0; i--)
    {
        cout << digits[i];
    }
    cout << "\n";
    return 0;
}