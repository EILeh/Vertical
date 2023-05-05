/* Vertical
 *
 * Description
 *
 * Program asks the user to input a number and then prints it vertically so that
 * every number is at its' on row.
 *
 * Writer of the program
 *
 * Name: EILeh
 */


#include <iostream>

#ifndef RECURSIVE_FUNC
#define RECURSIVE_FUNC
#endif

using namespace std;

void print_vertical(unsigned int num)
{
    RECURSIVE_FUNC

    // Checks if the input number is less than 10. If so, the input number size
    // is the length of 1 number and that number can be just printed.
    if ( num < 10 )
    {
        cout << num << endl;
    }

    // Function calls itself with parameter num/10 and in that way the last num-
    // ber can be removed from the whole number until there is only one number
    // left. To print the numbers as a vertical line, current number needs to
    // be divided by %10:
    // .. 234
    //    234 / 10 = 23, 23 / 10 = 2, 2 < 10
    //    234 % 10 = 4, 23 % 10 = 3, goes if and prints the number itself; 2
    else
    {
        print_vertical(num/10);
        cout << num % 10 << endl;
    }

}


#ifndef UNIT_TESTING
int main()
{
    unsigned int number = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "The given number (" << number << ") written vertically:" << endl;
    print_vertical(number);

    return 0;

}
#endif
