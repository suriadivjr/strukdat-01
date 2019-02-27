/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Exercise-02 Celcius to Fahrenheit
Tahun           : 2019
*/
#include <iostream>
using namespace std;

float cel2Fah(float cel)
{
    float temp;
    return temp = cel*9/5+32;
}

int main()
{
    float cel=9;
    float fah=cel2Fah(cel);
    cout << "temp is " << fah;
    return 0;
}
