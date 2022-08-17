#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*
Dccument that a program calculates two integers
*/
/*
* This is a code which takes two number from user and calculate
* it
*/
int main()
{
    int num1{0}, num2{0};
    int sum{0};
    cout << "Enter number 1"<<endl;
    cin >> num1;
    cout << "Enter number 2"<<endl;
    cin >> num2;
	sum  = num1+num2;
	cout << "The total is: "<< sum<<endl;
    return 0;
}

