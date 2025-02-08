/* Question Find Discount



Problem Statement
Write a program to create a function that takes two arguments: the original price and the discount percentage as integers and returns the final price after the discount.

Input
The input consists of two integers: the original price and the discount.

Output
The output will print the final price after discount which will be a float number.

Constraints
N stands for any integer number.

0 ≤ |N| ≤ 100000
Example:
Enter numbers

Input:
50 20
Output:
Price: 40.00
Notes:
Your answer should be rounded to two decimal places.
*/
#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    int originalPrice, discount;
    cin >> originalPrice >> discount;
    cout << "Price: " << fixed << setprecision(2) << (originalPrice * (1 - discount / 100.0)) << endl;
    return 0;
}