//
// Created by Kirill Ivanov on 2019-04-23.
//

#include <iostream>

using namespace std;

int IsPalindrom(string s) {
    int N = s.size();
    bool poly = true;

    for (int i = 0; i <= N/2; i++) {
        if (s[i] != s[N- 1 - i]) {
            poly = false;
            break;
        }
    }
    return poly;
}

int main() {
    string s;
    cin >> s;

    if (IsPalindrom(s)) {
        cout << "True";
    } else {
        cout << "False";
    }


    return 0;
}