#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*
c -> Prompt the user to enter two integers
d -> Read two integers from the keyboard and store them in the
variable a and b
*/
int main()
{
    int a{0}, b{0};
    cout << "Enter the number 1 and number 2: "<<endl;
    cin >> a >> b;
    cout << a <<" "<<b<<endl;
    return 0;
}

