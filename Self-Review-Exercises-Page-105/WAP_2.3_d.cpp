#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*
If the variable x is greater than zero print number is +ive
*/
int main()
{
    int x{0};
    cout << "Please enter the number"<<endl;
    cin >> x;
    if(x>0)
    {
    	cout << "Number is Positive"<<endl;
	}
	else
	{
		cout << "Either number is zero or negative"<<endl;
	}
    return 0;
}

