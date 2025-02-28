/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.
 * Bonus question (easy):  can you do this without keeping track of two
 * different sums?
 * Bonus question (might be non-obvious): can you do this without any
 * if statements? */

 #include <iostream>
 using std::cin;
 using std::cout;
 
 int main()
 {
    cout << "How many numbers do you want to enter? ";
    int count;
    cin >> count;
    int evensum = 0;
    int oddsum = 0;
    int x;
    for(int i = 0; i < count; i++)
    {
         cin >> x;
        if(x % 2 == 0)
        {
            evensum += x;
        }
        else 
        {
            oddsum += x;
        }
    }
    int finalvalue = evensum - oddsum;
    cout << "Final Value: " << finalvalue << "\n";
    cout << "Evensum: " << evensum << "\n";
    cout << "Oddsum: " << oddsum << "\n";
    return 0;
 }
 
 // vim:foldlevel=2
 
 /*
 while(true)
 {
    cin >> x;
    if (cin.good() == false)
    {
        break;
    }
    else
    {
        if (x % 2 == 0)
        {
            evensum += x;
        }
        else
        {
            oddsum += x;
        }
    }
}
 */