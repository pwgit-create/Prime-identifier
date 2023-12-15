
#include <iostream>
using namespace std;
int main()
{

    short noRestDevideFactors = 0; // If this is over 1 , it´s not a prime
    long long n = 25614879839; // 11 digits
    long long counter = 1;


    while (counter < n) {

        counter++;
        if (n % counter == 0 && (n / counter) * counter == n) {
            cout << "Factor -> " << counter << endl;
            noRestDevideFactors++;
        }
    }

    if (noRestDevideFactors == 1)
        cout << "Prime" << endl;
    else
        cout << "Ordinary Number";
}

// Prime numbers to play with

    //long long n = 17; //two digits
    //long long n = 6072817; // 6 digits
    //long long n = 46425199; // 8 digits
    //long long n = 269194339; // 9 digits
    //long long n = 2988869281; // 10 digits
    //long long n = 25614879839; // 11 digits
    //long long n = 842537631857; // 12 digits
    //long long n = 4363960100683; //13 digits 
    //long long n = 98487118985183; //14 digits 
    //long long n = 219903858975007; //15 digits
    //long long n = 8749332041282267; // 16 digits
    //long long n = 58606038920653061; // 17 digits
    //long long n = 683455497516022181; //18 digits
    //long long n = 2585767852464311149; // 19 digits

