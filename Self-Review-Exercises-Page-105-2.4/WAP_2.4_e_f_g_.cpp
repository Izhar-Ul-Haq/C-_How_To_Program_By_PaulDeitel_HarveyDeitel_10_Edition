#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*
e -> Compute the sum in variable a and b and assign the value to
variable sum
f -> print "The sum is:" followed by sum
g -> Return a value from main indicating that the program
terminated successfully
*/
int main()
{
    int a{0}, b{0};
    int sum{0};
    cout << "Enter the variable one and two"<<endl;
    cin >> a >> b;
    sum = a+ b;
    cout << "the sum is: "<< sum<<endl;
    return 0;
}

