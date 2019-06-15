//
// Created by Kirill Ivanov on 2019-04-23.
//

#include <iostream>

using namespace std;

int Factorial (int n) {
    int res;

    if ( n <= 1) {
        return 1;
    }

    res = n * Factorial (n - 1);

    return res;
}


int main() {
    int a;
    cin >> a;
    cout << Factorial(a);

    return 0;
}