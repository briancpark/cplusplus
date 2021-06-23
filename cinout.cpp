#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
    int num1, num2;

    cout << "Enter two integers, and I will tell you\n"
         << "the relationships they satisfy: ";
    cin >> num1 >> num2; //reads two integers

    cout << num1 << num2 << "numbers" << endl;
    
    return 0;
}
