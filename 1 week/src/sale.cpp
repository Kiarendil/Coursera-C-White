//
// Created by Kirill Ivanov on 2019-04-21.
//

#include <iostream>

using namespace std;

int main() {
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;

    if (N > A) {
        if (N > B) {
            cout << N * (1 - Y * 0.01);
        } else {
            cout << N * (1 - X * 0.01);
        }
    } else {
        cout << N;
    }

    return 0;
}