/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */
#include <iostream>
using std::cin;
using std::cout;

//Arbitrarily many integers
int main()
{
    int n;
    cout << "How many integers do you want to average? ";
    cin >> n;
    //n is the number of integers to be read
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        sum += x;
    }
    

    double avg = sum / n;

    cout << avg << "\n";
    
    return 0;
}

/*3 integers
int main()
{
    int a, b, c;
    double sum = 0;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;
    sum = a + b + c;
    double avg = sum / 3.0;
    cout << avg << "\n";
    
    return 0;
}
*/
