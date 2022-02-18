#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int c = 0;

    int sum = 0;

    do {
        c = a + b;
        a = b;
        b = c;

        if (c % 2 == 0) {
            sum += c;
        }
    } while (c <= 4000000);

    cout << sum << endl;
}
