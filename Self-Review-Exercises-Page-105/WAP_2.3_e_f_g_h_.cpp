#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*
e -> Print the message "My first program in c++" on two lines
end the first line with program
f -> Print the message "My first program in c++" with each word
on seperate line
g -> Print the message "My first program in c++" with each word
seperated by tab
h -> Print the message "My first program in c++" one one line
with stream insertion operator
*/
int main()
{
    cout << "My first program in c++"<<endl;
    cout << "My \nfirst\nprogram \nin \nc++"<<endl;
    cout << "\tMy \tfirst \tprogram \tin \tc++"<<endl;
    cout << "My first program in c++"<<endl;
    return 0;
}

