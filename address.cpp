#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
    int a = 42;
    int *b;
    b = &a;

    std::cout << &a << endl;
    std::cout << a << endl;
    std::cout << *b << endl;

    //Will C++ segfault?
    
    int *x;

    //std::cout << *x << endl;

    //Answer: yes, stil the same like C.

    return 0;
}
