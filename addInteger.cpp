#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    int number1;
    int number2;
    int sum;
    cout << "Please enter your first number"<<endl;
    cin >> number1;
    cout << "Please enter your second number"<<endl;
    cin >> number2;
    sum = number1+ number2;
    cout << "The sum of number1 and number2 is: "<< sum <<endl;
    return 0;
}

