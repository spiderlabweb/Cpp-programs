#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float celsius;

    // taking input in degree celsius
    cout << "Enter the temperature in celsius: ";
    cin >> celsius;

    // calculating fahrenheit
    float fahrenheit = (celsius * 1.8) + 32;

    // printing fahrenheit
    cout << "The temperature is " << fahrenheit << " degree fahrenheit.";
    return 0;
}