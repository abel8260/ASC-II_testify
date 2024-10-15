// C++ program to illustrate how to use the callback
// function
#include <iostream>
using namespace std;

// callback function
int foo(char c) { return (int)c; }

// another function that is taking callback
void printASCIIcode(char c, int(*func_ptr)(char))
{
    int ascii = func_ptr(c);
    cout << "ASCII code of " << c << " is: " << ascii;
}

// driver code
int main()
{

    printASCIIcode('a', &foo);
    return 0;
}
