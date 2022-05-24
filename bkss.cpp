
#include <iostream>
using namespace std;
int main()
{
    int number, divisor;
    bool isprime = true;
    cout << "Enter the Number to check for Prime or Composite" << endl;
    cin >> number;
    if (number < 1)
        cout << "Number needs to be greater than1";
    else if (number == 1)
        cout << "1is neigher Prime nor Composite";
    else
    {
        for (divisor = 2; divisor <= (number / 2); divisor++)
        {
            if ((number % divisor) == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
            cout << number << "is a Prime Number";

        else
            cout << number << "is a composite Number";
    }
    return 0;
}
