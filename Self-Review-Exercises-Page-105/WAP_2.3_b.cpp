#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*
Prompt the user to enter an inter. End your prompting message
a colon followed by a space and leave the cursor positioned
after the space
*/
int main()
{
    int integerNumber{0};
    cout << "Enter the integer number please: ";
    cin >> integerNumber;
    cout << "The number is: " << integerNumber<<endl;
    return 0;
}

