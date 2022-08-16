#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    int number1{0};
    int number2{0};
    cout << "Please enter two numbers";
    cin >> number1 >> number2;
    if(number1==number2)
    {
    	cout << number1 << "==" << number2 << endl;
	}
	if(number1!= number2)
	{
		cout << number1 << "!=" << number2 << endl;
	}
	if(number1 > number2)
	{
		cout << number1 << ">" << number2 <<endl;
	}
	if(number1 < number2)
	{
		cout << number1 << "<" << number2 <<endl;
	}
	if(number1 >= number2)
	{
		cout << number1 << ">=" << number2 <<endl;
	}
	if(number1 <= number2)
	{
		cout << number1 << "<=" << number2 <<endl;
	}
    return 0;
}

