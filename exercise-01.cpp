/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Exercise-01 Fizz Buzz
Tahun           : 2019
*/
#include <iostream>
using namespace std;

void fizzbuzz()
{
    for (int x=1; x<101; x++)
    {
        if (x%3==0 && x%5==0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (x%5==0)
        {
            cout << "Buzz" << endl;
        }
        else if (x%3==0)
        {
            cout << "Fizz" << endl;
        }
        else
        {
            cout << x << endl;
        }

    }
}

int main()
{
    fizzbuzz();
}
