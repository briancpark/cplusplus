#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    } else {
        int x = fibonacci(n - 1) + fibonacci(n - 2);
        cout << x << endl;
        return x;
    }
}
int main() {
    fibonacci(10);
    return 0;
}
