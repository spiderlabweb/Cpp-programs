#include <iostream> 

using namespace std; 
 
int gcd(int num1, int num2) { 
    if (num2 == 0) 
        return num1; 
    return gcd(num2, num1 % num2);  
      
} 
   
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF is " << gcd(num1, num2) << endl;
    return 0;
}