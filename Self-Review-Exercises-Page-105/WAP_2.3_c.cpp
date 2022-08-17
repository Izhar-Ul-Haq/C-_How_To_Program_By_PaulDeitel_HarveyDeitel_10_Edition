#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*
Get a value from the user of integer type in a varaible x and
print the value by multilpying with 3 and add 5
*/
int main()
{
    int x{0};
    cout << "Enter the number please: "<<endl;
    cin >>x;
    cout << "The value is "<< (x*3)+ 5;
    return 0;
}

