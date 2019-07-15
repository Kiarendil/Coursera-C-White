//
// Created by Kirill Ivanov on 2019-04-22.
//

#include <iostream>

using namespace std;

int main() {
    string s;
    int N = 0;

    cin >> s;

    for (int i = 0; i <= s.size(); i++) {
        if (N == 2) {
            cout << i - 1 << endl;
            break;
        }
        if (s[i] == 'f') {
            N += 1;
        }
    }
    if (N == 1) {
        cout << -1 << endl;
    } else if (N == 0) {
        cout << -2 << endl;
    }


    return 0;
}