#include <iostream>
using namespace std;
 
// Function to find factorial of
// given number
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 
// Driver code
int main()
{
    int num = 8;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}
